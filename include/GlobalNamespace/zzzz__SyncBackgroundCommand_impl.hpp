#pragma once
// IWYU pragma private; include "GlobalNamespace/SyncBackgroundCommand.hpp"
#include "GlobalNamespace/zzzz__IBackgroundCommand_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SyncBackgroundCommand_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SyncBackgroundCommand.get_resultTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::SyncBackgroundCommand::*)()>(
    &::GlobalNamespace::SyncBackgroundCommand::get_resultTask)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22b313c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncBackgroundCommand*>::get(),
                                                                               "get_resultTask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncBackgroundCommand.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::SyncBackgroundCommand::*)()>(
    &::GlobalNamespace::SyncBackgroundCommand::Execute)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x22b3184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncBackgroundCommand*>::get(), "Execute",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncBackgroundCommand.ExecuteInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SyncBackgroundCommand::*)()>(&::GlobalNamespace::SyncBackgroundCommand::ExecuteInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncBackgroundCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncBackgroundCommand*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncBackgroundCommand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SyncBackgroundCommand::*)()>(&::GlobalNamespace::SyncBackgroundCommand::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22b32ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncBackgroundCommand*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*& GlobalNamespace::SyncBackgroundCommand::__cordl_internal_get__taskCompletionSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskCompletionSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* const& GlobalNamespace::SyncBackgroundCommand::__cordl_internal_get__taskCompletionSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskCompletionSource;
}
constexpr void GlobalNamespace::SyncBackgroundCommand::__cordl_internal_set__taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____taskCompletionSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::SyncBackgroundCommand::get_resultTask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncBackgroundCommand*>::get(), "get_resultTask",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::SyncBackgroundCommand::Execute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncBackgroundCommand*>::get(), "Execute",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void GlobalNamespace::SyncBackgroundCommand::ExecuteInternal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncBackgroundCommand*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SyncBackgroundCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncBackgroundCommand*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SyncBackgroundCommand* GlobalNamespace::SyncBackgroundCommand::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SyncBackgroundCommand*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBackgroundCommand"
constexpr GlobalNamespace::SyncBackgroundCommand::operator ::GlobalNamespace::IBackgroundCommand*() noexcept {
  return static_cast<::GlobalNamespace::IBackgroundCommand*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBackgroundCommand"
constexpr ::GlobalNamespace::IBackgroundCommand* GlobalNamespace::SyncBackgroundCommand::i___GlobalNamespace__IBackgroundCommand() noexcept {
  return static_cast<::GlobalNamespace::IBackgroundCommand*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SyncBackgroundCommand::SyncBackgroundCommand() {}
