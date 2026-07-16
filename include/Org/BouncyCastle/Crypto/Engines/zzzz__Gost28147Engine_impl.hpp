#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/Gost28147Engine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Gost28147Engine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine.AddSBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::AddSBox)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x33aea58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(),
                                                                                           { "AddSBox", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x33aeb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Init)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x33aebe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33aef88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine.get_IsPartialBlockOkay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::get_IsPartialBlockOkay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33aefcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::GetBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33aefd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::ProcessBlock)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x33aefdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33af33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine.generateWorkingKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)(bool, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::generateWorkingKey)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x33aee58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(),
                                                                                           { "generateWorkingKey", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine.Gost28147_mainStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)(int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Gost28147_mainStep)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x33af3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(),
                                                                                           { "Gost28147_mainStep", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine.Gost28147Func
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)(::ArrayW<int32_t>, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Gost28147Func)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x33af0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(),
                                                                                           { "Gost28147Func",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine.bytesToint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::bytesToint)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x33af340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(),
                                                                                           { "bytesToint", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine.intTobytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::intTobytes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x33af49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(),
                                                             { "intTobytes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine.GetSBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::GetSBox)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x33af51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(), { "GetSBox", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine.GetSBoxName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::GetSBoxName)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x33af6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(), { "GetSBoxName", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Crypto::Engines::Gost28147Engine::__cordl_internal_get_workingKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingKey;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Crypto::Engines::Gost28147Engine::__cordl_internal_get_workingKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingKey;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Gost28147Engine::__cordl_internal_set_workingKey(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___workingKey = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::Gost28147Engine::__cordl_internal_get_forEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::Gost28147Engine::__cordl_internal_get_forEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Gost28147Engine::__cordl_internal_set_forEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forEncryption = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Engines::Gost28147Engine::__cordl_internal_get_S() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Engines::Gost28147Engine::__cordl_internal_get_S() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Gost28147Engine::__cordl_internal_set_S(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___S = value;
}
inline void Org::BouncyCastle::Crypto::Engines::Gost28147Engine::setStaticF_Sbox_Default(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "Sbox_Default", ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Gost28147Engine::getStaticF_Sbox_Default() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "Sbox_Default", ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Gost28147Engine::setStaticF_ESbox_Test(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "ESbox_Test", ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Gost28147Engine::getStaticF_ESbox_Test() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "ESbox_Test", ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Gost28147Engine::setStaticF_ESbox_A(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "ESbox_A", ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Gost28147Engine::getStaticF_ESbox_A() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "ESbox_A", ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Gost28147Engine::setStaticF_ESbox_B(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "ESbox_B", ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Gost28147Engine::getStaticF_ESbox_B() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "ESbox_B", ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Gost28147Engine::setStaticF_ESbox_C(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "ESbox_C", ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Gost28147Engine::getStaticF_ESbox_C() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "ESbox_C", ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Gost28147Engine::setStaticF_ESbox_D(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "ESbox_D", ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Gost28147Engine::getStaticF_ESbox_D() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "ESbox_D", ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Gost28147Engine::setStaticF_DSbox_Test(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "DSbox_Test", ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Gost28147Engine::getStaticF_DSbox_Test() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "DSbox_Test", ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Gost28147Engine::setStaticF_DSbox_A(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "DSbox_A", ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Gost28147Engine::getStaticF_DSbox_A() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "DSbox_A", ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Gost28147Engine::setStaticF_sBoxes(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "sBoxes", ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::Engines::Gost28147Engine::getStaticF_sBoxes() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "sBoxes", ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Gost28147Engine::AddSBox(::StringW sBoxName, ::ArrayW<uint8_t> sBox) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(),
                                                                                         { "AddSBox", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sBoxName, sBox);
}
inline void Org::BouncyCastle::Crypto::Engines::Gost28147Engine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::Gost28147Engine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Engines::Gost28147Engine::get_IsPartialBlockOkay() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::Gost28147Engine::GetBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::Gost28147Engine::ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Engines::Gost28147Engine::generateWorkingKey(bool forEncryption, ::ArrayW<uint8_t> userKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(),
                                                                                         { "generateWorkingKey", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, forEncryption, userKey);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Gost28147_mainStep(int32_t n1, int32_t key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(),
                                                                                         { "Gost28147_mainStep", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, n1, key);
}
inline void Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Gost28147Func(::ArrayW<int32_t> workingKey, ::ArrayW<uint8_t> inBytes, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(),
                                                                                         { "Gost28147Func",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, workingKey, inBytes, inOff, outBytes, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::Gost28147Engine::bytesToint(::ArrayW<uint8_t> inBytes, int32_t inOff) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(),
                                                                                         { "bytesToint", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, inBytes, inOff);
}
inline void Org::BouncyCastle::Crypto::Engines::Gost28147Engine::intTobytes(int32_t num, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(),
                                                           { "intTobytes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, num, outBytes, outOff);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Gost28147Engine::GetSBox(::StringW sBoxName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(), { "GetSBox", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, sBoxName);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::Gost28147Engine::GetSBoxName(::ArrayW<uint8_t> sBox) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>(), { "GetSBoxName", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, sBox);
}
inline ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine* Org::BouncyCastle::Crypto::Engines::Gost28147Engine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr Org::BouncyCastle::Crypto::Engines::Gost28147Engine::operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Engines::Gost28147Engine::i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Gost28147Engine() {}
