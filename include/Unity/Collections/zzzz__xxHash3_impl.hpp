#pragma once
// IWYU pragma private; include "Unity/Collections/xxHash3.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__xxHash3_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__xxHash3_def.hpp"
#include "Unity/Mathematics/zzzz__uint2_def.hpp"
#include "Unity/Mathematics/zzzz__uint4_def.hpp"
//  Writing Method size for method: ::Unity::Collections::xxHash3_ulong2._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::xxHash3_ulong2::*)(uint64_t, uint64_t)>(&::Unity::Collections::xxHash3_ulong2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6314f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_ulong2>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Collections::xxHash3_ulong2::_ctor(uint64_t x, uint64_t y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_ulong2>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x, y);
}
// Ctor Parameters [CppParam { name: "x", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::xxHash3_ulong2::xxHash3_ulong2(uint64_t x, uint64_t y) noexcept {
  this->x = x;
  this->y = y;
}
// Ctor Parameters []
constexpr ::Unity::Collections::xxHash3_ulong2::xxHash3_ulong2() {}
constexpr uint64_t& Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_get_Acc() {
  return this->___Acc;
}
constexpr uint64_t const& Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_get_Acc() const {
  return this->___Acc;
}
constexpr void Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_set_Acc(uint64_t value) {
  this->___Acc = value;
}
constexpr uint8_t& Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_get_Buffer() {
  return this->___Buffer;
}
constexpr uint8_t const& Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_get_Buffer() const {
  return this->___Buffer;
}
constexpr void Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_set_Buffer(uint8_t value) {
  this->___Buffer = value;
}
constexpr int32_t& Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_get_IsHash64() {
  return this->___IsHash64;
}
constexpr int32_t const& Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_get_IsHash64() const {
  return this->___IsHash64;
}
constexpr void Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_set_IsHash64(int32_t value) {
  this->___IsHash64 = value;
}
constexpr int32_t& Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_get_BufferedSize() {
  return this->___BufferedSize;
}
constexpr int32_t const& Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_get_BufferedSize() const {
  return this->___BufferedSize;
}
constexpr void Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_set_BufferedSize(int32_t value) {
  this->___BufferedSize = value;
}
constexpr int32_t& Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_get_NbStripesSoFar() {
  return this->___NbStripesSoFar;
}
constexpr int32_t const& Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_get_NbStripesSoFar() const {
  return this->___NbStripesSoFar;
}
constexpr void Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_set_NbStripesSoFar(int32_t value) {
  this->___NbStripesSoFar = value;
}
constexpr int64_t& Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_get_TotalLength() {
  return this->___TotalLength;
}
constexpr int64_t const& Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_get_TotalLength() const {
  return this->___TotalLength;
}
constexpr void Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_set_TotalLength(int64_t value) {
  this->___TotalLength = value;
}
constexpr uint64_t& Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_get_Seed() {
  return this->___Seed;
}
constexpr uint64_t const& Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_get_Seed() const {
  return this->___Seed;
}
constexpr void Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_set_Seed(uint64_t value) {
  this->___Seed = value;
}
constexpr uint8_t& Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_get_SecretKey() {
  return this->___SecretKey;
}
constexpr uint8_t const& Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_get_SecretKey() const {
  return this->___SecretKey;
}
constexpr void Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_set_SecretKey(uint8_t value) {
  this->___SecretKey = value;
}
constexpr uint8_t& Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_get__PadEnd() {
  return this->____PadEnd;
}
constexpr uint8_t const& Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_get__PadEnd() const {
  return this->____PadEnd;
}
constexpr void Unity::Collections::StreamingState_xxHash3_StreamingStateData::__cordl_internal_set__PadEnd(uint8_t value) {
  this->____PadEnd = value;
}
// Ctor Parameters [CppParam { name: "Acc", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Buffer", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "IsHash64", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BufferedSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NbStripesSoFar", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "TotalLength", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Seed", ty: "uint64_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "SecretKey", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PadEnd", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::StreamingState_xxHash3_StreamingStateData::StreamingState_xxHash3_StreamingStateData(uint64_t Acc, uint8_t Buffer, int32_t IsHash64, int32_t BufferedSize,
                                                                                                                     int32_t NbStripesSoFar, int64_t TotalLength, uint64_t Seed, uint8_t SecretKey,
                                                                                                                     uint8_t _PadEnd) noexcept {
  this->Acc = Acc;
  this->Buffer = Buffer;
  this->IsHash64 = IsHash64;
  this->BufferedSize = BufferedSize;
  this->NbStripesSoFar = NbStripesSoFar;
  this->TotalLength = TotalLength;
  this->Seed = Seed;
  this->SecretKey = SecretKey;
  this->_PadEnd = _PadEnd;
}
// Ctor Parameters []
constexpr ::Unity::Collections::StreamingState_xxHash3_StreamingStateData::StreamingState_xxHash3_StreamingStateData() {}
//  Writing Method size for method: ::Unity::Collections::xxHash3_StreamingState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::xxHash3_StreamingState::*)(bool, uint64_t)>(
    &::Unity::Collections::xxHash3_StreamingState::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6315a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3_StreamingState.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::xxHash3_StreamingState::*)(bool, uint64_t)>(
    &::Unity::Collections::xxHash3_StreamingState::Reset)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6315ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(), "Reset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3_StreamingState.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::xxHash3_StreamingState::*)(void*, int32_t)>(
    &::Unity::Collections::xxHash3_StreamingState::Update)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x6315cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3_StreamingState.DigestHash128
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::uint4 (::Unity::Collections::xxHash3_StreamingState::*)()>(
    &::Unity::Collections::xxHash3_StreamingState::DigestHash128)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x63160ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(),
                                                                               "DigestHash128", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3_StreamingState.DigestHash64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::uint2 (::Unity::Collections::xxHash3_StreamingState::*)()>(
    &::Unity::Collections::xxHash3_StreamingState::DigestHash64)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6316534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(),
                                                                               "DigestHash64", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3_StreamingState.get_Acc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t* (::Unity::Collections::xxHash3_StreamingState::*)()>(
    &::Unity::Collections::xxHash3_StreamingState::get_Acc)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6315cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(), "get_Acc",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3_StreamingState.get_Buffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t* (::Unity::Collections::xxHash3_StreamingState::*)()>(
    &::Unity::Collections::xxHash3_StreamingState::get_Buffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6315f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(),
                                                                               "get_Buffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3_StreamingState.get_SecretKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t* (::Unity::Collections::xxHash3_StreamingState::*)()>(
    &::Unity::Collections::xxHash3_StreamingState::get_SecretKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6315cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(),
                                                                               "get_SecretKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3_StreamingState.DigestLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::xxHash3_StreamingState::*)(uint64_t*, uint8_t*, int32_t)>(
    &::Unity::Collections::xxHash3_StreamingState::DigestLong)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x6316290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(), "DigestLong", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3_StreamingState.ConsumeStripes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::xxHash3_StreamingState::*)(
    uint64_t*, ::ByRef<int32_t>, uint8_t*, int64_t, uint8_t*, int32_t)>(&::Unity::Collections::xxHash3_StreamingState::ConsumeStripes)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6315f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(), "ConsumeStripes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3_StreamingState.CheckKeySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::xxHash3_StreamingState::*)(int32_t)>(
    &::Unity::Collections::xxHash3_StreamingState::CheckKeySize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6316688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(), "CheckKeySize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Collections::xxHash3_StreamingState::setStaticF_SECRET_LIMIT(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SECRET_LIMIT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get>(std::forward<int32_t>(value));
}
inline int32_t Unity::Collections::xxHash3_StreamingState::getStaticF_SECRET_LIMIT() {
  return ::cordl_internals::getStaticField<int32_t, "SECRET_LIMIT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get>();
}
inline void Unity::Collections::xxHash3_StreamingState::setStaticF_NB_STRIPES_PER_BLOCK(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "NB_STRIPES_PER_BLOCK", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Unity::Collections::xxHash3_StreamingState::getStaticF_NB_STRIPES_PER_BLOCK() {
  return ::cordl_internals::getStaticField<int32_t, "NB_STRIPES_PER_BLOCK", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get>();
}
inline void Unity::Collections::xxHash3_StreamingState::setStaticF_INTERNAL_BUFFER_SIZE(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "INTERNAL_BUFFER_SIZE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Unity::Collections::xxHash3_StreamingState::getStaticF_INTERNAL_BUFFER_SIZE() {
  return ::cordl_internals::getStaticField<int32_t, "INTERNAL_BUFFER_SIZE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get>();
}
inline void Unity::Collections::xxHash3_StreamingState::setStaticF_INTERNAL_BUFFER_STRIPES(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "INTERNAL_BUFFER_STRIPES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Unity::Collections::xxHash3_StreamingState::getStaticF_INTERNAL_BUFFER_STRIPES() {
  return ::cordl_internals::getStaticField<int32_t, "INTERNAL_BUFFER_STRIPES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get>();
}
inline void Unity::Collections::xxHash3_StreamingState::_ctor(bool isHash64, uint64_t seed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isHash64, seed);
}
inline void Unity::Collections::xxHash3_StreamingState::Reset(bool isHash64, uint64_t seed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(), "Reset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isHash64, seed);
}
inline void Unity::Collections::xxHash3_StreamingState::Update(void* input, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, length);
}
template <typename T> inline void Unity::Collections::xxHash3_StreamingState::Update(::ByRef<T> input) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(), "Update",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline ::Unity::Mathematics::uint4 Unity::Collections::xxHash3_StreamingState::DigestHash128() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(),
                                                                             "DigestHash128", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::uint2 Unity::Collections::xxHash3_StreamingState::DigestHash64() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(),
                                                                             "DigestHash64", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2, false>(this, ___internal_method);
}
inline uint64_t* Unity::Collections::xxHash3_StreamingState::get_Acc() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(), "get_Acc",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t*, false>(this, ___internal_method);
}
inline uint8_t* Unity::Collections::xxHash3_StreamingState::get_Buffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(), "get_Buffer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t*, false>(this, ___internal_method);
}
inline uint8_t* Unity::Collections::xxHash3_StreamingState::get_SecretKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(),
                                                                             "get_SecretKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t*, false>(this, ___internal_method);
}
inline void Unity::Collections::xxHash3_StreamingState::DigestLong(uint64_t* acc, uint8_t* secret, int32_t isHash64) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(), "DigestLong", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, acc, secret, isHash64);
}
inline void Unity::Collections::xxHash3_StreamingState::ConsumeStripes(uint64_t* acc, ::ByRef<int32_t> nbStripesSoFar, uint8_t* input, int64_t totalStripes, uint8_t* secret, int32_t isHash64) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(), "ConsumeStripes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, acc, nbStripesSoFar, input, totalStripes, secret, isHash64);
}
inline void Unity::Collections::xxHash3_StreamingState::CheckKeySize(int32_t isHash64) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_StreamingState>::get(), "CheckKeySize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isHash64);
}
// Ctor Parameters [CppParam { name: "State", ty: "::Unity::Collections::StreamingState_xxHash3_StreamingStateData", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::xxHash3_StreamingState::xxHash3_StreamingState(::Unity::Collections::StreamingState_xxHash3_StreamingStateData State) noexcept {
  this->State = State;
}
// Ctor Parameters []
constexpr ::Unity::Collections::xxHash3_StreamingState::xxHash3_StreamingState() {}
//  Writing Method size for method: ::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate::*)(
    ::System::Object*, ::System::IntPtr)>(&::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6316780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate::*)(
    uint8_t*, uint8_t*, int64_t, uint8_t*)>(&::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6316800;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate::*)(uint8_t*, uint8_t*, int64_t, uint8_t*, ::System::AsyncCallback*, ::System::Object*)>(
    &::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6316814;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(
    &::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6316878;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate::_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                        ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline uint64_t Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate::Invoke(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, input, dest, length, secret);
}
inline ::System::IAsyncResult* Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate::BeginInvoke(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret,
                                                                                                                 ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace,
                                                                                                                 ::System::Object* _cordl_fixed_empty_name_whitespace_param_5) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, input, dest, length, secret, _cordl_fixed_empty_name_whitespace,
                                                                             _cordl_fixed_empty_name_whitespace_param_5);
}
inline uint64_t Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate*
Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate::New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate() {}
//  Writing Method size for method: ::Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall.GetFunctionPointerDiscard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::System::IntPtr>)>(
    &::Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x631689c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall*>::get(), "GetFunctionPointerDiscard",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall.GetFunctionPointer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&::Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63169a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall*>::get(),
                                                 "GetFunctionPointer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint8_t*, uint8_t*, int64_t, uint8_t*)>(
    &::Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6314b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall*>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall::setStaticF_Pointer(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall*>::get>(
      std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall::getStaticF_Pointer() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall*>::get>();
}
inline void Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall::GetFunctionPointerDiscard(::ByRef<::System::IntPtr> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall*>::get(), "GetFunctionPointerDiscard",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall::GetFunctionPointer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall*>::get(), "GetFunctionPointer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method);
}
inline uint64_t Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall::Invoke(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall*>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, input, dest, length, secret);
}
// Ctor Parameters []
constexpr ::Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall::xxHash3_Hash64Long_00000A73$BurstDirectCall() {}
//  Writing Method size for method: ::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate::*)(
    ::System::Object*, ::System::IntPtr)>(&::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x63169c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate::*)(
    uint8_t*, uint8_t*, int64_t, uint8_t*, ::ByRef<::Unity::Mathematics::uint4>)>(&::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6316a40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate::*)(uint8_t*, uint8_t*, int64_t, uint8_t*, ::ByRef<::Unity::Mathematics::uint4>, ::System::AsyncCallback*,
                                                                                ::System::Object*)>(&::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6316a54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(
    &::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6316b18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate::_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                         ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate::Invoke(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret, ::ByRef<::Unity::Mathematics::uint4> result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, dest, length, secret, result);
}
inline ::System::IAsyncResult* Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate::BeginInvoke(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret,
                                                                                                                  ::ByRef<::Unity::Mathematics::uint4> result,
                                                                                                                  ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace,
                                                                                                                  ::System::Object* _cordl_fixed_empty_name_whitespace_param_6) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, input, dest, length, secret, result, _cordl_fixed_empty_name_whitespace,
                                                                             _cordl_fixed_empty_name_whitespace_param_6);
}
inline void Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate*
Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate::New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate() {}
//  Writing Method size for method: ::Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall.GetFunctionPointerDiscard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::System::IntPtr>)>(
    &::Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6316b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall*>::get(), "GetFunctionPointerDiscard",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall.GetFunctionPointer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&::Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6316c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall*>::get(),
                                                 "GetFunctionPointer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, uint8_t*, int64_t, uint8_t*, ::ByRef<::Unity::Mathematics::uint4>)>(
    &::Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6314f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall*>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::uint4>>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall::setStaticF_Pointer(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall*>::get>(
      std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall::getStaticF_Pointer() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall*>::get>();
}
inline void Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall::GetFunctionPointerDiscard(::ByRef<::System::IntPtr> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall*>::get(), "GetFunctionPointerDiscard",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall::GetFunctionPointer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall*>::get(), "GetFunctionPointer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method);
}
inline void Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall::Invoke(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret, ::ByRef<::Unity::Mathematics::uint4> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall*>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::uint4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, input, dest, length, secret, result);
}
// Ctor Parameters []
constexpr ::Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall::xxHash3_Hash128Long_00000A7A$BurstDirectCall() {}
//  Writing Method size for method: ::Unity::Collections::xxHash3.Avx2HashLongInternalLoop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t*, uint8_t*, uint8_t*, int64_t, uint8_t*, int32_t)>(
    &::Unity::Collections::xxHash3::Avx2HashLongInternalLoop)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6313548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Avx2HashLongInternalLoop", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Avx2ScrambleAcc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t*, uint8_t*)>(&::Unity::Collections::xxHash3::Avx2ScrambleAcc)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6313550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Avx2ScrambleAcc", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Avx2Accumulate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t*, uint8_t*, uint8_t*, uint8_t*, int64_t, int32_t)>(
    &::Unity::Collections::xxHash3::Avx2Accumulate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x631354c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Avx2Accumulate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Avx2Accumulate512
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t*, uint8_t*, uint8_t*, uint8_t*)>(&::Unity::Collections::xxHash3::Avx2Accumulate512)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6313554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Avx2Accumulate512", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::uint2 (*)(void*, int64_t)>(&::Unity::Collections::xxHash3::Hash64)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6313558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::uint2 (*)(void*, int64_t, uint64_t)>(&::Unity::Collections::xxHash3::Hash64)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6313780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash128
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::uint4 (*)(void*, int64_t)>(&::Unity::Collections::xxHash3::Hash128)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x631381c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash128
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::uint4 (*)(void*, void*, int64_t)>(&::Unity::Collections::xxHash3::Hash128)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6313af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash128
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::uint4 (*)(void*, int64_t, uint64_t)>(&::Unity::Collections::xxHash3::Hash128)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6313bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash128
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::uint4 (*)(void*, void*, int64_t, uint64_t)>(&::Unity::Collections::xxHash3::Hash128)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6313c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash64Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t)>(&::Unity::Collections::xxHash3::Hash64Internal)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x63135f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash128Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t, ::ByRef<::Unity::Mathematics::uint4>)>(
    &::Unity::Collections::xxHash3::Hash128Internal)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x63138cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::uint4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash64Len1To3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint8_t*, int64_t, uint8_t*, uint64_t)>(&::Unity::Collections::xxHash3::Hash64Len1To3)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63149e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64Len1To3", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash64Len4To8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint8_t*, int64_t, uint8_t*, uint64_t)>(&::Unity::Collections::xxHash3::Hash64Len4To8)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6314a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64Len4To8", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash64Len9To16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint8_t*, int64_t, uint8_t*, uint64_t)>(&::Unity::Collections::xxHash3::Hash64Len9To16)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6314aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64Len9To16", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash64Len0To16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint8_t*, int64_t, uint8_t*, uint64_t)>(&::Unity::Collections::xxHash3::Hash64Len0To16)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6313d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64Len0To16", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash64Len17To128
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint8_t*, int64_t, uint8_t*, uint64_t)>(&::Unity::Collections::xxHash3::Hash64Len17To128)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x6313d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64Len17To128", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash64Len129To240
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint8_t*, int64_t, uint8_t*, uint64_t)>(&::Unity::Collections::xxHash3::Hash64Len129To240)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6314090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64Len129To240", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash64Long
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint8_t*, uint8_t*, int64_t, uint8_t*)>(&::Unity::Collections::xxHash3::Hash64Long)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6313540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64Long", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash128Len1To3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, int64_t, uint8_t*, uint64_t, ::ByRef<::Unity::Mathematics::uint4>)>(
    &::Unity::Collections::xxHash3::Hash128Len1To3)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6314cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128Len1To3", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::uint4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash128Len4To8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, int64_t, uint8_t*, uint64_t, ::ByRef<::Unity::Mathematics::uint4>)>(
    &::Unity::Collections::xxHash3::Hash128Len4To8)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6314d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128Len4To8", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::uint4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash128Len9To16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, int64_t, uint8_t*, uint64_t, ::ByRef<::Unity::Mathematics::uint4>)>(
    &::Unity::Collections::xxHash3::Hash128Len9To16)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6314e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128Len9To16", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::uint4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash128Len0To16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, int64_t, uint8_t*, uint64_t, ::ByRef<::Unity::Mathematics::uint4>)>(
    &::Unity::Collections::xxHash3::Hash128Len0To16)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6314248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128Len0To16", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::uint4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash128Len17To128
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, int64_t, uint8_t*, uint64_t, ::ByRef<::Unity::Mathematics::uint4>)>(
    &::Unity::Collections::xxHash3::Hash128Len17To128)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x63142d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128Len17To128", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::uint4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash128Len129To240
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, int64_t, uint8_t*, uint64_t, ::ByRef<::Unity::Mathematics::uint4>)>(
    &::Unity::Collections::xxHash3::Hash128Len129To240)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x6314690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128Len129To240", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::uint4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash128Long
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, uint8_t*, int64_t, uint8_t*, ::ByRef<::Unity::Mathematics::uint4>)>(
    &::Unity::Collections::xxHash3::Hash128Long)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6313544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128Long", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::uint4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.ToUint2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::uint2 (*)(uint64_t)>(&::Unity::Collections::xxHash3::ToUint2)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x631377c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "ToUint2", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.ToUint4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::uint4 (*)(uint64_t, uint64_t)>(&::Unity::Collections::xxHash3::ToUint4)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6314d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "ToUint4", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.EncodeSecretKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, uint8_t*, uint64_t)>(&::Unity::Collections::xxHash3::EncodeSecretKey)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6314214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "EncodeSecretKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Read64LE
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(void*)>(&::Unity::Collections::xxHash3::Read64LE)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6315154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Read64LE", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Read32LE
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(void*)>(&::Unity::Collections::xxHash3::Read32LE)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631515c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Read32LE", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Write64LE
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, uint64_t)>(&::Unity::Collections::xxHash3::Write64LE)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6315164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Write64LE", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Read32LE
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, uint32_t)>(&::Unity::Collections::xxHash3::Read32LE)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631516c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Read32LE", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Mul32To64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint32_t, uint32_t)>(&::Unity::Collections::xxHash3::Mul32To64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6315174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Mul32To64", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Swap64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t)>(&::Unity::Collections::xxHash3::Swap64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631517c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Swap64", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Swap32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t)>(&::Unity::Collections::xxHash3::Swap32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6315184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Swap32", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.RotL32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t, int32_t)>(&::Unity::Collections::xxHash3::RotL32)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x631518c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "RotL32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.RotL64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, int32_t)>(&::Unity::Collections::xxHash3::RotL64)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6315198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "RotL64", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.XorShift64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, int32_t)>(&::Unity::Collections::xxHash3::XorShift64)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63151a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "XorShift64", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Mul128Fold64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, uint64_t)>(&::Unity::Collections::xxHash3::Mul128Fold64)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x63151b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Mul128Fold64", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Mix16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint8_t*, uint8_t*, uint64_t)>(&::Unity::Collections::xxHash3::Mix16)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x63151ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Mix16", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Mix32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Collections::xxHash3_ulong2 (*)(::Unity::Collections::xxHash3_ulong2, uint8_t*, uint8_t*, uint8_t*, uint64_t)>(&::Unity::Collections::xxHash3::Mix32)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6315240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Mix32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::xxHash3_ulong2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Avalanche
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t)>(&::Unity::Collections::xxHash3::Avalanche)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63152fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Avalanche", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.AvalancheH64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t)>(&::Unity::Collections::xxHash3::AvalancheH64)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x631531c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "AvalancheH64", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.rrmxmx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, uint64_t)>(&::Unity::Collections::xxHash3::rrmxmx)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6315354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "rrmxmx", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Mix2Acc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, uint64_t, uint8_t*)>(&::Unity::Collections::xxHash3::Mix2Acc)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6315388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Mix2Acc", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.MergeAcc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t*, uint8_t*, uint64_t)>(&::Unity::Collections::xxHash3::MergeAcc)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x63153d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "MergeAcc", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.DefaultHashLongInternalLoop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t*, uint8_t*, uint8_t*, int64_t, uint8_t*, int32_t)>(
    &::Unity::Collections::xxHash3::DefaultHashLongInternalLoop)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6315530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "DefaultHashLongInternalLoop", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.DefaultAccumulate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t*, uint8_t*, uint8_t*, uint8_t*, int64_t, int32_t)>(
    &::Unity::Collections::xxHash3::DefaultAccumulate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x63156e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "DefaultAccumulate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.DefaultAccumulate512
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t*, uint8_t*, uint8_t*, uint8_t*, int32_t)>(&::Unity::Collections::xxHash3::DefaultAccumulate512)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x63157a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "DefaultAccumulate512", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.DefaultScrambleAcc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t*, uint8_t*)>(&::Unity::Collections::xxHash3::DefaultScrambleAcc)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x631576c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "DefaultScrambleAcc", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash64Long$BurstManaged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint8_t*, uint8_t*, int64_t, uint8_t*)>(&::Unity::Collections::xxHash3::Hash64Long$BurstManaged)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x63157f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64Long$BurstManaged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::xxHash3.Hash128Long$BurstManaged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, uint8_t*, int64_t, uint8_t*, ::ByRef<::Unity::Mathematics::uint4>)>(
    &::Unity::Collections::xxHash3::Hash128Long$BurstManaged)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6315900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128Long$BurstManaged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::uint4>>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Collections::xxHash3::Avx2HashLongInternalLoop(uint64_t* acc, uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret, int32_t isHash64) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Avx2HashLongInternalLoop", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, acc, input, dest, length, secret, isHash64);
}
inline void Unity::Collections::xxHash3::Avx2ScrambleAcc(uint64_t* acc, uint8_t* secret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Avx2ScrambleAcc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, acc, secret);
}
inline void Unity::Collections::xxHash3::Avx2Accumulate(uint64_t* acc, uint8_t* input, uint8_t* dest, uint8_t* secret, int64_t nbStripes, int32_t isHash64) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Avx2Accumulate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, acc, input, dest, secret, nbStripes, isHash64);
}
inline void Unity::Collections::xxHash3::Avx2Accumulate512(uint64_t* acc, uint8_t* input, uint8_t* dest, uint8_t* secret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Avx2Accumulate512", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, acc, input, dest, secret);
}
inline ::Unity::Mathematics::uint2 Unity::Collections::xxHash3::Hash64(void* input, int64_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2, false>(nullptr, ___internal_method, input, length);
}
template <typename T> inline ::Unity::Mathematics::uint2 Unity::Collections::xxHash3::Hash64(::ByRef<T> input) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2, false>(nullptr, ___internal_method, input);
}
inline ::Unity::Mathematics::uint2 Unity::Collections::xxHash3::Hash64(void* input, int64_t length, uint64_t seed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2, false>(nullptr, ___internal_method, input, length, seed);
}
inline ::Unity::Mathematics::uint4 Unity::Collections::xxHash3::Hash128(void* input, int64_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4, false>(nullptr, ___internal_method, input, length);
}
template <typename T> inline ::Unity::Mathematics::uint4 Unity::Collections::xxHash3::Hash128(::ByRef<T> input) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4, false>(nullptr, ___internal_method, input);
}
inline ::Unity::Mathematics::uint4 Unity::Collections::xxHash3::Hash128(void* input, void* destination, int64_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4, false>(nullptr, ___internal_method, input, destination, length);
}
inline ::Unity::Mathematics::uint4 Unity::Collections::xxHash3::Hash128(void* input, int64_t length, uint64_t seed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4, false>(nullptr, ___internal_method, input, length, seed);
}
inline ::Unity::Mathematics::uint4 Unity::Collections::xxHash3::Hash128(void* input, void* destination, int64_t length, uint64_t seed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4, false>(nullptr, ___internal_method, input, destination, length, seed);
}
inline uint64_t Unity::Collections::xxHash3::Hash64Internal(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret, uint64_t seed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, input, dest, length, secret, seed);
}
inline void Unity::Collections::xxHash3::Hash128Internal(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret, uint64_t seed, ::ByRef<::Unity::Mathematics::uint4> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::uint4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, input, dest, length, secret, seed, result);
}
inline uint64_t Unity::Collections::xxHash3::Hash64Len1To3(uint8_t* input, int64_t len, uint8_t* secret, uint64_t seed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64Len1To3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, input, len, secret, seed);
}
inline uint64_t Unity::Collections::xxHash3::Hash64Len4To8(uint8_t* input, int64_t length, uint8_t* secret, uint64_t seed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64Len4To8", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, input, length, secret, seed);
}
inline uint64_t Unity::Collections::xxHash3::Hash64Len9To16(uint8_t* input, int64_t length, uint8_t* secret, uint64_t seed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64Len9To16", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, input, length, secret, seed);
}
inline uint64_t Unity::Collections::xxHash3::Hash64Len0To16(uint8_t* input, int64_t length, uint8_t* secret, uint64_t seed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64Len0To16", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, input, length, secret, seed);
}
inline uint64_t Unity::Collections::xxHash3::Hash64Len17To128(uint8_t* input, int64_t length, uint8_t* secret, uint64_t seed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64Len17To128", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, input, length, secret, seed);
}
inline uint64_t Unity::Collections::xxHash3::Hash64Len129To240(uint8_t* input, int64_t length, uint8_t* secret, uint64_t seed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64Len129To240", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, input, length, secret, seed);
}
inline uint64_t Unity::Collections::xxHash3::Hash64Long(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64Long", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, input, dest, length, secret);
}
inline void Unity::Collections::xxHash3::Hash128Len1To3(uint8_t* input, int64_t length, uint8_t* secret, uint64_t seed, ::ByRef<::Unity::Mathematics::uint4> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128Len1To3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::uint4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, input, length, secret, seed, result);
}
inline void Unity::Collections::xxHash3::Hash128Len4To8(uint8_t* input, int64_t len, uint8_t* secret, uint64_t seed, ::ByRef<::Unity::Mathematics::uint4> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128Len4To8", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::uint4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, input, len, secret, seed, result);
}
inline void Unity::Collections::xxHash3::Hash128Len9To16(uint8_t* input, int64_t len, uint8_t* secret, uint64_t seed, ::ByRef<::Unity::Mathematics::uint4> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128Len9To16", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::uint4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, input, len, secret, seed, result);
}
inline void Unity::Collections::xxHash3::Hash128Len0To16(uint8_t* input, int64_t length, uint8_t* secret, uint64_t seed, ::ByRef<::Unity::Mathematics::uint4> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128Len0To16", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::uint4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, input, length, secret, seed, result);
}
inline void Unity::Collections::xxHash3::Hash128Len17To128(uint8_t* input, int64_t length, uint8_t* secret, uint64_t seed, ::ByRef<::Unity::Mathematics::uint4> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128Len17To128", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::uint4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, input, length, secret, seed, result);
}
inline void Unity::Collections::xxHash3::Hash128Len129To240(uint8_t* input, int64_t length, uint8_t* secret, uint64_t seed, ::ByRef<::Unity::Mathematics::uint4> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128Len129To240", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::uint4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, input, length, secret, seed, result);
}
inline void Unity::Collections::xxHash3::Hash128Long(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret, ::ByRef<::Unity::Mathematics::uint4> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128Long", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::uint4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, input, dest, length, secret, result);
}
inline ::Unity::Mathematics::uint2 Unity::Collections::xxHash3::ToUint2(uint64_t u) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "ToUint2", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2, false>(nullptr, ___internal_method, u);
}
inline ::Unity::Mathematics::uint4 Unity::Collections::xxHash3::ToUint4(uint64_t ul0, uint64_t ul1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "ToUint4", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4, false>(nullptr, ___internal_method, ul0, ul1);
}
inline void Unity::Collections::xxHash3::EncodeSecretKey(uint8_t* dst, uint8_t* secret, uint64_t seed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "EncodeSecretKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dst, secret, seed);
}
inline uint64_t Unity::Collections::xxHash3::Read64LE(void* addr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Read64LE", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, addr);
}
inline uint32_t Unity::Collections::xxHash3::Read32LE(void* addr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Read32LE", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, addr);
}
inline void Unity::Collections::xxHash3::Write64LE(void* addr, uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Write64LE", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, addr, value);
}
inline void Unity::Collections::xxHash3::Read32LE(void* addr, uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Read32LE", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, addr, value);
}
inline uint64_t Unity::Collections::xxHash3::Mul32To64(uint32_t x, uint32_t y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Mul32To64", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, x, y);
}
inline uint64_t Unity::Collections::xxHash3::Swap64(uint64_t x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Swap64", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, x);
}
inline uint32_t Unity::Collections::xxHash3::Swap32(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Swap32", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, x);
}
inline uint32_t Unity::Collections::xxHash3::RotL32(uint32_t x, int32_t r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "RotL32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, x, r);
}
inline uint64_t Unity::Collections::xxHash3::RotL64(uint64_t x, int32_t r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "RotL64", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, x, r);
}
inline uint64_t Unity::Collections::xxHash3::XorShift64(uint64_t v64, int32_t shift) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "XorShift64", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, v64, shift);
}
inline uint64_t Unity::Collections::xxHash3::Mul128Fold64(uint64_t lhs, uint64_t rhs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Mul128Fold64", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, lhs, rhs);
}
inline uint64_t Unity::Collections::xxHash3::Mix16(uint8_t* input, uint8_t* secret, uint64_t seed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Mix16", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, input, secret, seed);
}
inline ::Unity::Collections::xxHash3_ulong2 Unity::Collections::xxHash3::Mix32(::Unity::Collections::xxHash3_ulong2 acc, uint8_t* input_1, uint8_t* input_2, uint8_t* secret, uint64_t seed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Mix32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::xxHash3_ulong2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::xxHash3_ulong2, false>(nullptr, ___internal_method, acc, input_1, input_2, secret, seed);
}
inline uint64_t Unity::Collections::xxHash3::Avalanche(uint64_t h64) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Avalanche", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, h64);
}
inline uint64_t Unity::Collections::xxHash3::AvalancheH64(uint64_t h64) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "AvalancheH64", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, h64);
}
inline uint64_t Unity::Collections::xxHash3::rrmxmx(uint64_t h64, uint64_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "rrmxmx", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, h64, length);
}
inline uint64_t Unity::Collections::xxHash3::Mix2Acc(uint64_t acc0, uint64_t acc1, uint8_t* secret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Mix2Acc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, acc0, acc1, secret);
}
inline uint64_t Unity::Collections::xxHash3::MergeAcc(uint64_t* acc, uint8_t* secret, uint64_t start) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "MergeAcc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, acc, secret, start);
}
inline void Unity::Collections::xxHash3::DefaultHashLongInternalLoop(uint64_t* acc, uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret, int32_t isHash64) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "DefaultHashLongInternalLoop", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, acc, input, dest, length, secret, isHash64);
}
inline void Unity::Collections::xxHash3::DefaultAccumulate(uint64_t* acc, uint8_t* input, uint8_t* dest, uint8_t* secret, int64_t nbStripes, int32_t isHash64) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "DefaultAccumulate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, acc, input, dest, secret, nbStripes, isHash64);
}
inline void Unity::Collections::xxHash3::DefaultAccumulate512(uint64_t* acc, uint8_t* input, uint8_t* dest, uint8_t* secret, int32_t isHash64) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "DefaultAccumulate512", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, acc, input, dest, secret, isHash64);
}
inline void Unity::Collections::xxHash3::DefaultScrambleAcc(uint64_t* acc, uint8_t* secret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "DefaultScrambleAcc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, acc, secret);
}
inline uint64_t Unity::Collections::xxHash3::Hash64Long$BurstManaged(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash64Long$BurstManaged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, input, dest, length, secret);
}
inline void Unity::Collections::xxHash3::Hash128Long$BurstManaged(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret, ::ByRef<::Unity::Mathematics::uint4> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHash3*>::get(), "Hash128Long$BurstManaged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::uint4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, input, dest, length, secret, result);
}
// Ctor Parameters []
constexpr ::Unity::Collections::xxHash3::xxHash3() {}
