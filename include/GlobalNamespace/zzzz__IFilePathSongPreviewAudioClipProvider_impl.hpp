#pragma once
#include "GlobalNamespace/zzzz__IFilePathSongPreviewAudioClipProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IFilePathSongPreviewAudioClipProvider.get_songPreviewAudioClipPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::IFilePathSongPreviewAudioClipProvider::*)()>(
    &::GlobalNamespace::IFilePathSongPreviewAudioClipProvider::get_songPreviewAudioClipPath)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>::get(), 0));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::IFilePathSongPreviewAudioClipProvider::get_songPreviewAudioClipPath() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
