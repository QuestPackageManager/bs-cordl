#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/Disposables/CompositeDisposable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/DotnetExtension/Disposables/zzzz__CompositeDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::CompositeDisposable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::DotnetExtension::Disposables::CompositeDisposable::*)(int32_t)>(
    &::BGLib::DotnetExtension::Disposables::CompositeDisposable::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x31e78e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::CompositeDisposable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::DotnetExtension::Disposables::CompositeDisposable::*)(
    ::ArrayW<::System::IDisposable*, ::Array<::System::IDisposable*>*>)>(&::BGLib::DotnetExtension::Disposables::CompositeDisposable::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x31e7964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::IDisposable*, ::Array<::System::IDisposable*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::CompositeDisposable.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::DotnetExtension::Disposables::CompositeDisposable::*)(::System::IDisposable*)>(
    &::BGLib::DotnetExtension::Disposables::CompositeDisposable::Add)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x31e79c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::CompositeDisposable.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::DotnetExtension::Disposables::CompositeDisposable::*)(
    ::ArrayW<::System::IDisposable*, ::Array<::System::IDisposable*>*>)>(&::BGLib::DotnetExtension::Disposables::CompositeDisposable::Add)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x31e7ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::IDisposable*, ::Array<::System::IDisposable*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::CompositeDisposable.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::DotnetExtension::Disposables::CompositeDisposable::*)()>(
    &::BGLib::DotnetExtension::Disposables::CompositeDisposable::Dispose)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x31e7ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>*& BGLib::DotnetExtension::Disposables::CompositeDisposable::__cordl_internal_get__disposables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposables;
}
constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>* const& BGLib::DotnetExtension::Disposables::CompositeDisposable::__cordl_internal_get__disposables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposables;
}
constexpr void BGLib::DotnetExtension::Disposables::CompositeDisposable::__cordl_internal_set__disposables(::System::Collections::Generic::List_1<::System::IDisposable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disposables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BGLib::DotnetExtension::Disposables::CompositeDisposable::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
inline void BGLib::DotnetExtension::Disposables::CompositeDisposable::_ctor(::ArrayW<::System::IDisposable*, ::Array<::System::IDisposable*>*> disposables) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::IDisposable*, ::Array<::System::IDisposable*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposables);
}
inline void BGLib::DotnetExtension::Disposables::CompositeDisposable::Add(::System::IDisposable* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline void BGLib::DotnetExtension::Disposables::CompositeDisposable::Add(::ArrayW<::System::IDisposable*, ::Array<::System::IDisposable*>*> disposables) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::IDisposable*, ::Array<::System::IDisposable*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposables);
}
inline void BGLib::DotnetExtension::Disposables::CompositeDisposable::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGLib::DotnetExtension::Disposables::CompositeDisposable* BGLib::DotnetExtension::Disposables::CompositeDisposable::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>(capacity));
}
inline ::BGLib::DotnetExtension::Disposables::CompositeDisposable*
BGLib::DotnetExtension::Disposables::CompositeDisposable::New_ctor(::ArrayW<::System::IDisposable*, ::Array<::System::IDisposable*>*> disposables) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>(disposables));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BGLib::DotnetExtension::Disposables::CompositeDisposable::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BGLib::DotnetExtension::Disposables::CompositeDisposable::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::Disposables::CompositeDisposable::CompositeDisposable() {}
