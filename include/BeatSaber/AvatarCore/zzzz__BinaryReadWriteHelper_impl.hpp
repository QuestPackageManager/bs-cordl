#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/BinaryReadWriteHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__BinaryReadWriteHelper_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::BinaryReadWriteHelper.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::BinaryWriter*, ::UnityEngine::Color)>(
    &::BeatSaber::AvatarCore::BinaryReadWriteHelper::Write)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x224f580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::BinaryReadWriteHelper*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryWriter*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::BinaryReadWriteHelper.ReadColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(::System::IO::BinaryReader*)>(&::BeatSaber::AvatarCore::BinaryReadWriteHelper::ReadColor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x224f608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::BinaryReadWriteHelper*>::get(), "ReadColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::AvatarCore::BinaryReadWriteHelper::Write(::System::IO::BinaryWriter* binaryWriter, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::BinaryReadWriteHelper*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryWriter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, binaryWriter, color);
}
inline ::UnityEngine::Color BeatSaber::AvatarCore::BinaryReadWriteHelper::ReadColor(::System::IO::BinaryReader* binaryReader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::BinaryReadWriteHelper*>::get(), "ReadColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(nullptr, ___internal_method, binaryReader);
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::BinaryReadWriteHelper::BinaryReadWriteHelper() {}
