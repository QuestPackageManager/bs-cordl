#pragma once
// IWYU pragma private; include "SFB/IStandaloneFileBrowser.hpp"
#include "SFB/zzzz__IStandaloneFileBrowser_def.hpp"
#include "SFB/zzzz__ExtensionFilter_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
inline ::ArrayW<::StringW, ::Array<::StringW>*> SFB::IStandaloneFileBrowser::OpenFilePanel(::StringW title, ::StringW directory,
                                                                                           ::ArrayW<::SFB::ExtensionFilter, ::Array<::SFB::ExtensionFilter>*> extensions, bool multiselect) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::SFB::IStandaloneFileBrowser*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, title, directory, extensions, multiselect);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> SFB::IStandaloneFileBrowser::OpenFolderPanel(::StringW title, ::StringW directory, bool multiselect) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::SFB::IStandaloneFileBrowser*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, title, directory, multiselect);
}
inline ::StringW SFB::IStandaloneFileBrowser::SaveFilePanel(::StringW title, ::StringW directory, ::StringW defaultName,
                                                            ::ArrayW<::SFB::ExtensionFilter, ::Array<::SFB::ExtensionFilter>*> extensions) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::SFB::IStandaloneFileBrowser*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, title, directory, defaultName, extensions);
}
inline void SFB::IStandaloneFileBrowser::OpenFilePanelAsync(::StringW title, ::StringW directory, ::ArrayW<::SFB::ExtensionFilter, ::Array<::SFB::ExtensionFilter>*> extensions, bool multiselect,
                                                            ::System::Action_1<::ArrayW<::StringW, ::Array<::StringW>*>>* cb) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::SFB::IStandaloneFileBrowser*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, title, directory, extensions, multiselect, cb);
}
inline void SFB::IStandaloneFileBrowser::OpenFolderPanelAsync(::StringW title, ::StringW directory, bool multiselect, ::System::Action_1<::ArrayW<::StringW, ::Array<::StringW>*>>* cb) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::SFB::IStandaloneFileBrowser*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, title, directory, multiselect, cb);
}
inline void SFB::IStandaloneFileBrowser::SaveFilePanelAsync(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<::SFB::ExtensionFilter, ::Array<::SFB::ExtensionFilter>*> extensions,
                                                            ::System::Action_1<::StringW>* cb) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::SFB::IStandaloneFileBrowser*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, title, directory, defaultName, extensions, cb);
}
