#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AvatarEditHistory_def.hpp"
#include "Menu/ViewControllers/zzzz__EditAvatarHistorySnapshot_def.hpp"
#include "GlobalNamespace/zzzz__EditAvatarViewController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__AvatarData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AvatarEditHistory.get_undoAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AvatarEditHistory::*)()>(&::GlobalNamespace::AvatarEditHistory::get_undoAvailable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2167ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarEditHistory*>::get(),
                                                                               "get_undoAvailable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarEditHistory.get_redoAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AvatarEditHistory::*)()>(&::GlobalNamespace::AvatarEditHistory::get_redoAvailable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2167af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarEditHistory*>::get(),
                                                                               "get_redoAvailable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarEditHistory.get_currentSnapShot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Menu::ViewControllers::EditAvatarHistorySnapshot* (::GlobalNamespace::AvatarEditHistory::*)()>(
    &::GlobalNamespace::AvatarEditHistory::get_currentSnapShot)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2167b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarEditHistory*>::get(),
                                                                               "get_currentSnapShot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarEditHistory.get_lastEditedPart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart (::GlobalNamespace::AvatarEditHistory::*)()>(
    &::GlobalNamespace::AvatarEditHistory::get_lastEditedPart)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2167b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarEditHistory*>::get(),
                                                                               "get_lastEditedPart", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarEditHistory.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarEditHistory::*)()>(&::GlobalNamespace::AvatarEditHistory::Clear)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2167bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarEditHistory*>::get(), "Clear",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarEditHistory.Undo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarEditHistory::*)()>(&::GlobalNamespace::AvatarEditHistory::Undo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2167c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarEditHistory*>::get(), "Undo",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarEditHistory.Redo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarEditHistory::*)()>(&::GlobalNamespace::AvatarEditHistory::Redo)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2167c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarEditHistory*>::get(), "Redo",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarEditHistory.UpdateEditHistory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarEditHistory::*)(
    ::GlobalNamespace::AvatarData*, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart)>(&::GlobalNamespace::AvatarEditHistory::UpdateEditHistory)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2167ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarEditHistory*>::get(), "UpdateEditHistory", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarEditHistory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarEditHistory::*)()>(&::GlobalNamespace::AvatarEditHistory::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2167e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarEditHistory*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::AvatarEditHistory::__get_disableNextSnapshotOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableNextSnapshotOverride;
}
constexpr bool const& GlobalNamespace::AvatarEditHistory::__get_disableNextSnapshotOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableNextSnapshotOverride;
}
constexpr void GlobalNamespace::AvatarEditHistory::__set_disableNextSnapshotOverride(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disableNextSnapshotOverride = value;
}
constexpr ::System::Collections::Generic::List_1<::Menu::ViewControllers::EditAvatarHistorySnapshot*>*& GlobalNamespace::AvatarEditHistory::__get__snapShots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____snapShots;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Menu::ViewControllers::EditAvatarHistorySnapshot*>*> const&
GlobalNamespace::AvatarEditHistory::__get__snapShots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____snapShots;
}
constexpr void GlobalNamespace::AvatarEditHistory::__set__snapShots(::System::Collections::Generic::List_1<::Menu::ViewControllers::EditAvatarHistorySnapshot*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____snapShots)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::AvatarEditHistory::__get__currentDataId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDataId;
}
constexpr int32_t const& GlobalNamespace::AvatarEditHistory::__get__currentDataId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDataId;
}
constexpr void GlobalNamespace::AvatarEditHistory::__set__currentDataId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentDataId = value;
}
inline bool GlobalNamespace::AvatarEditHistory::get_undoAvailable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarEditHistory*>::get(), "get_undoAvailable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::AvatarEditHistory::get_redoAvailable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarEditHistory*>::get(), "get_redoAvailable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Menu::ViewControllers::EditAvatarHistorySnapshot* GlobalNamespace::AvatarEditHistory::get_currentSnapShot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarEditHistory*>::get(),
                                                                             "get_currentSnapShot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Menu::ViewControllers::EditAvatarHistorySnapshot*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart GlobalNamespace::AvatarEditHistory::get_lastEditedPart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarEditHistory*>::get(), "get_lastEditedPart",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarEditHistory::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarEditHistory*>::get(), "Clear",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarEditHistory::Undo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarEditHistory*>::get(), "Undo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarEditHistory::Redo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarEditHistory*>::get(), "Redo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarEditHistory::UpdateEditHistory(::GlobalNamespace::AvatarData* avatarData, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart avatarEditPart) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarEditHistory*>::get(), "UpdateEditHistory", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, avatarData, avatarEditPart);
}
inline ::GlobalNamespace::AvatarEditHistory* GlobalNamespace::AvatarEditHistory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AvatarEditHistory*>());
}
inline void GlobalNamespace::AvatarEditHistory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarEditHistory*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AvatarEditHistory::AvatarEditHistory() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
