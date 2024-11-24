//
// Created by sergey on 22.11.2024.
//
template <class type>
class ComplexNumber {
private:
    type Re;
    type Im;
public:
    //
    const type& Real(const type& Re) const {
        return this->Re;
    }
    type& Real(type& Re) {
        return this->Re;
    }
    //
    const type& Imag(const type& Im) const {
        return this->Im;
    }
    type& Imag(type& Im) {
        return this->Im;
    }
    //
    ComplexNumber () {
        Re = 0;
        Im = 0;
    }
    //
    explicit ComplexNumber (type Re) {
        this->Re = Re;
    }
    //
    ComplexNumber (type Re, type Im) {
        this->Re = Re;
        this->Im = Im;
    }
    //
    ComplexNumber (ComplexNumber &c) {
        Re = c.Re;
        Im = c.Im;
    }
    //
    ~ComplexNumber () = default;
    //
    type Abs () {
        return sqrt(Re*Re+Im*Im);
    }
    //
    type Arg () {
        return atan(Im/Re);
    }
    //
    type ArgDeg () {
        return atan(Im/Re)*180/3.14;
    }
    //
    type Conj () {
        return new ComplexNumber(Re,-Im);
    }
    ComplexNumber CreateComplexFromPhase(type Arg) {
        return(exp(Arg));
    }
    ComplexNumber CreateComplexFromPhaseDeg(type ArgDeg) {
        return(exp(ArgDeg));
    }
};
