#pragma once
#include "Tweening/zzzz__TweeningManager_impl.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
//  Writing Method size for method: ::Tweening::SongTimeTweeningManager.GetTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tweening::SongTimeTweeningManager::*)()>(&::Tweening::SongTimeTweeningManager::GetTime)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2481674;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::SongTimeTweeningManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::SongTimeTweeningManager*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::SongTimeTweeningManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tweening::SongTimeTweeningManager::*)()>(&::Tweening::SongTimeTweeningManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2481714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::SongTimeTweeningManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IAudioTimeSource*& Tweening::SongTimeTweeningManager::__cordl_internal_get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& Tweening::SongTimeTweeningManager::__cordl_internal_get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void Tweening::SongTimeTweeningManager::__cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t Tweening::SongTimeTweeningManager::GetTime() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::SongTimeTweeningManager*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::Tweening::SongTimeTweeningManager* Tweening::SongTimeTweeningManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Tweening::SongTimeTweeningManager*>());
}
inline void Tweening::SongTimeTweeningManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::SongTimeTweeningManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Tweening::SongTimeTweeningManager::SongTimeTweeningManager() {}
