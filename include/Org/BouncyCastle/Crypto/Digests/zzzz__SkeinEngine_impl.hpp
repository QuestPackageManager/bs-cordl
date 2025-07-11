#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/SkeinEngine.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__IMemoable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__SkeinEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__SkeinEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__ThreefishEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__SkeinParameters_def.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__IMemoable_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::*)(int64_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2335174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration.get_Bytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::get_Bytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2335720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration*>::get(), "get_Bytes",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::__cordl_internal_get_bytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bytes;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::__cordl_internal_get_bytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bytes;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::__cordl_internal_set_bytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::_ctor(int64_t outputSizeBits) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outputSizeBits);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::get_Bytes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration*>::get(), "get_Bytes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration* Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::New_ctor(int64_t outputSizeBits) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration*>(outputSizeBits));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Configuration::SkeinEngine_Configuration() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::*)(int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23350f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2335728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>::get(), "get_Type",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2335730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>::get(), "get_Value",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::__cordl_internal_set_type(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::__cordl_internal_set_value(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::_ctor(int32_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, value);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>::get(), "get_Type",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::get_Value() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>::get(), "get_Value",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter* Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::New_ctor(int32_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>(type, value));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter::SkeinEngine_Parameter() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2335738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)(
    ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*)>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::Reset)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x23357d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(), "Reset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::Reset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2335798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23358a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(), "get_Type",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.set_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)(uint32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::set_Type)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23358d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(), "set_Type",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.get_First
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::get_First)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x233590c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(), "get_First",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.set_First
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)(bool)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::set_First)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x233585c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(), "set_First",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.get_Final
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::get_Final)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x233593c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(), "get_Final",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.set_Final
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)(bool)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::set_Final)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x233596c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(), "set_Final",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.AdvancePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::AdvancePosition)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x23359ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(), "AdvancePosition",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.GetWords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint64_t, ::Array<uint64_t>*> (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::GetWords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2335b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(), "GetWords",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::ToString)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x2335b14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::__cordl_internal_get_tweak() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tweak;
}
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::__cordl_internal_get_tweak() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tweak;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::__cordl_internal_set_tweak(::ArrayW<uint64_t, ::Array<uint64_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tweak)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::__cordl_internal_get_extendedPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extendedPosition;
}
constexpr bool const& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::__cordl_internal_get_extendedPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extendedPosition;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::__cordl_internal_set_extendedPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extendedPosition = value;
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::Reset(::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak* tweak) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(), "Reset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tweak);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint32_t Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(),
                                                                             "get_Type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::set_Type(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(), "set_Type",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::get_First() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(),
                                                                             "get_First", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::set_First(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(), "set_First",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::get_Final() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(),
                                                                             "get_Final", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::set_Final(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(), "set_Final",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::AdvancePosition(int32_t advance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(), "AdvancePosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, advance);
}
inline ::ArrayW<uint64_t, ::Array<uint64_t>*> Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::GetWords() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(),
                                                                             "GetWords", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint64_t, ::Array<uint64_t>*>, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak* Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak::SkeinEngine_UbiTweak() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::*)(
    ::Org::BouncyCastle::Crypto::Digests::SkeinEngine*, int32_t)>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2334424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::*)(
    ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*)>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::Reset)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2334604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>::get(), "Reset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2335404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>::get(), "Reset",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint64_t, ::Array<uint64_t>*>)>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::Update)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x23352bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI.ProcessBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::*)(::ArrayW<uint64_t, ::Array<uint64_t>*>)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::ProcessBlock)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2335d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>::get(), "ProcessBlock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI.DoFinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::*)(::ArrayW<uint64_t, ::Array<uint64_t>*>)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::DoFinal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2335444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>::get(), "DoFinal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak*& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_get_tweak() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tweak;
}
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak* const& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_get_tweak() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tweak;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_set_tweak(::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UbiTweak* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tweak)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine*& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_get_engine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine* const& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_get_engine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_set_engine(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___engine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_get_currentBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentBlock;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_get_currentBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentBlock;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_set_currentBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_get_currentOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentOffset;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_get_currentOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentOffset;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_set_currentOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentOffset = value;
}
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_get_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_get_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::__cordl_internal_set_message(::ArrayW<uint64_t, ::Array<uint64_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::_ctor(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine, int32_t blockSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, engine, blockSize);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::Reset(::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI* ubi) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>::get(), "Reset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ubi);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::Reset(int32_t type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::Update(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t offset, int32_t len, ::ArrayW<uint64_t, ::Array<uint64_t>*> output) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, offset, len, output);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::ProcessBlock(::ArrayW<uint64_t, ::Array<uint64_t>*> output) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>::get(), "ProcessBlock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::DoFinal(::ArrayW<uint64_t, ::Array<uint64_t>*> output) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>::get(), "DoFinal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI* Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::New_ctor(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine,
                                                                                                                            int32_t blockSize) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*>(engine, blockSize));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI::SkeinEngine_UBI() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.InitialState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t, ::ArrayW<uint64_t, ::Array<uint64_t>*>)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::InitialState)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x23342dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "InitialState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.VariantIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine::VariantIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233441c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "VariantIdentifier", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::_ctor)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x23335c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::Org::BouncyCastle::Crypto::Digests::SkeinEngine*)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23337d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.CopyIn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::Org::BouncyCastle::Crypto::Digests::SkeinEngine*)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::CopyIn)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2334500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "CopyIn", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>*> (*)(
        ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>*>,
        ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>*>)>(
        &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Clone)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x23346b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Clone", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                           ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>*>>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                           ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Copy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::IMemoable* (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Copy)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2334750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                               "Copy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::Org::BouncyCastle::Utilities::IMemoable*)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Reset)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x23338b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Reset", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IMemoable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.get_OutputSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::get_OutputSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23347a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                               "get_OutputSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.get_BlockSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::get_BlockSize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2333bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                               "get_BlockSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters*)>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Init)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2333c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::SkeinParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.InitParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::InitParams)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x23347b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "InitParams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.CreateInitialState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::CreateInitialState)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x2334e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                               "CreateInitialState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2333d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                               "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.UbiComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::UbiComplete)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2335124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "UbiComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.UbiInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::UbiInit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23350dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "UbiInit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.UbiFinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::UbiFinal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23353e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                               "UbiFinal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.CheckInitialised
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::CheckInitialised)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23354b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                               "CheckInitialised", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Update)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2333d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Update",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Update)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2333dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.DoFinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::DoFinal)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2333e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "DoFinal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Output
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(
    uint64_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Output)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2335510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Output", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_threefish() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threefish;
}
constexpr ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine* const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_threefish() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threefish;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_set_threefish(::Org::BouncyCastle::Crypto::Engines::ThreefishEngine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___threefish)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_outputSizeBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputSizeBytes;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_outputSizeBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputSizeBytes;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_set_outputSizeBytes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outputSizeBytes = value;
}
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_chain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chain;
}
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_chain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chain;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_set_chain(::ArrayW<uint64_t, ::Array<uint64_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_initialState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialState;
}
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_initialState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialState;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_set_initialState(::ArrayW<uint64_t, ::Array<uint64_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___initialState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_set_key(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>*>&
Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_preMessageParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preMessageParameters;
}
constexpr ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>*> const&
Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_preMessageParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preMessageParameters;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_set_preMessageParameters(
    ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___preMessageParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>*>&
Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_postMessageParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postMessageParameters;
}
constexpr ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>*> const&
Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_postMessageParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postMessageParameters;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_set_postMessageParameters(
    ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___postMessageParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI*& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_ubi() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ubi;
}
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI* const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_ubi() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ubi;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_set_ubi(::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ubi)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_singleByte() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleByte;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_get_singleByte() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleByte;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__cordl_internal_set_singleByte(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___singleByte)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::setStaticF_INITIAL_STATES(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "INITIAL_STATES",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::Digests::SkeinEngine::getStaticF_INITIAL_STATES() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "INITIAL_STATES",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get>();
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::InitialState(int32_t blockSize, int32_t outputSize, ::ArrayW<uint64_t, ::Array<uint64_t>*> state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "InitialState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, blockSize, outputSize, state);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::SkeinEngine::VariantIdentifier(int32_t blockSizeBytes, int32_t outputSizeBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "VariantIdentifier", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, blockSizeBytes, outputSizeBytes);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::_ctor(int32_t blockSizeBits, int32_t outputSizeBits) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, blockSizeBits, outputSizeBits);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::_ctor(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, engine);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::CopyIn(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "CopyIn", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, engine);
}
inline ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>*>
Org::BouncyCastle::Crypto::Digests::SkeinEngine::Clone(
    ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>*> data,
    ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>*> existing) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Clone", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                          ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>*>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                          ::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>*>, false>(
      nullptr, ___internal_method, data, existing);
}
inline ::Org::BouncyCastle::Utilities::IMemoable* Org::BouncyCastle::Crypto::Digests::SkeinEngine::Copy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Copy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::IMemoable*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::Reset(::Org::BouncyCastle::Utilities::IMemoable* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Reset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IMemoable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::SkeinEngine::get_OutputSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                             "get_OutputSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::SkeinEngine::get_BlockSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                             "get_BlockSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::Init(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::SkeinParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::InitParams(::System::Collections::IDictionary* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "InitParams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::CreateInitialState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                             "CreateInitialState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::UbiComplete(int32_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "UbiComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, value);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::UbiInit(int32_t type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "UbiInit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::UbiFinal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                             "UbiFinal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::CheckInitialised() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                             "CheckInitialised", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::Update(uint8_t inByte) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inByte);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::Update(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inBytes, inOff, len);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::SkeinEngine::DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "DoFinal", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, outBytes, outOff);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::Output(uint64_t outputSequence, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff, int32_t outputBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Output", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outputSequence, outBytes, outOff, outputBytes);
}
inline ::Org::BouncyCastle::Crypto::Digests::SkeinEngine* Org::BouncyCastle::Crypto::Digests::SkeinEngine::New_ctor(int32_t blockSizeBits, int32_t outputSizeBits) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(blockSizeBits, outputSizeBits));
}
inline ::Org::BouncyCastle::Crypto::Digests::SkeinEngine* Org::BouncyCastle::Crypto::Digests::SkeinEngine::New_ctor(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(engine));
}
/// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
constexpr Org::BouncyCastle::Crypto::Digests::SkeinEngine::operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept {
  return static_cast<::Org::BouncyCastle::Utilities::IMemoable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Utilities::IMemoable"
constexpr ::Org::BouncyCastle::Utilities::IMemoable* Org::BouncyCastle::Crypto::Digests::SkeinEngine::i___Org__BouncyCastle__Utilities__IMemoable() noexcept {
  return static_cast<::Org::BouncyCastle::Utilities::IMemoable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine::SkeinEngine() {}
