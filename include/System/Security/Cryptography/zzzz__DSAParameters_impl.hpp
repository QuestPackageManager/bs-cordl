#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DSAParameters.hpp"
#include "System/Security/Cryptography/zzzz__DSAParameters_def.hpp"
// Ctor Parameters [CppParam { name: "P", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Q", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "G", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Y", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "J", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "X", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Seed", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Counter", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::DSAParameters::DSAParameters(::ArrayW<uint8_t,::Array<uint8_t>*>  P, ::ArrayW<uint8_t,::Array<uint8_t>*>  Q, ::ArrayW<uint8_t,::Array<uint8_t>*>  G, ::ArrayW<uint8_t,::Array<uint8_t>*>  Y, ::ArrayW<uint8_t,::Array<uint8_t>*>  J, ::ArrayW<uint8_t,::Array<uint8_t>*>  X, ::ArrayW<uint8_t,::Array<uint8_t>*>  Seed, int32_t  Counter) noexcept  {
this->P = P;
this->Q = Q;
this->G = G;
this->Y = Y;
this->J = J;
this->X = X;
this->Seed = Seed;
this->Counter = Counter;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DSAParameters::DSAParameters()   {
}
