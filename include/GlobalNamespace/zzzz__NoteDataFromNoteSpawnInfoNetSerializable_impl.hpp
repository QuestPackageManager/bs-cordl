#pragma once
#include "GlobalNamespace/zzzz__NoteData_impl.hpp"
#include "GlobalNamespace/zzzz__NoteDataFromNoteSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnInfoNetSerializable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable::*)(
    ::GlobalNamespace::NoteSpawnInfoNetSerializable*)>(&::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23d3ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable*
GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable::New_ctor(::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable*>(noteSpawnInfo));
}
inline void GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable::_ctor(::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteSpawnInfo);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable::NoteDataFromNoteSpawnInfoNetSerializable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
