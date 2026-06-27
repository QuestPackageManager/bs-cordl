#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSAParameters.hpp"
#include "System/Security/Cryptography/zzzz__RSAParameters_def.hpp"
// Ctor Parameters [CppParam { name: "Exponent", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Modulus", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "P", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Q", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "DP", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "DQ", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "InverseQ", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "D", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::RSAParameters::RSAParameters(::ArrayW<uint8_t,::Array<uint8_t>*>  Exponent, ::ArrayW<uint8_t,::Array<uint8_t>*>  Modulus, ::ArrayW<uint8_t,::Array<uint8_t>*>  P, ::ArrayW<uint8_t,::Array<uint8_t>*>  Q, ::ArrayW<uint8_t,::Array<uint8_t>*>  DP, ::ArrayW<uint8_t,::Array<uint8_t>*>  DQ, ::ArrayW<uint8_t,::Array<uint8_t>*>  InverseQ, ::ArrayW<uint8_t,::Array<uint8_t>*>  D) noexcept  {
this->Exponent = Exponent;
this->Modulus = Modulus;
this->P = P;
this->Q = Q;
this->DP = DP;
this->DQ = DQ;
this->InverseQ = InverseQ;
this->D = D;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RSAParameters::RSAParameters()   {
}
