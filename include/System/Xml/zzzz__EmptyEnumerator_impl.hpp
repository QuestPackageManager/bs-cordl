#pragma once
// IWYU pragma private; include "System/Xml/EmptyEnumerator.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__EmptyEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::EmptyEnumerator.System_Collections_IEnumerator_MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::EmptyEnumerator::*)()>(
    &::System::Xml::EmptyEnumerator::System_Collections_IEnumerator_MoveNext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x434a868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EmptyEnumerator*>::get(), "System.Collections.IEnumerator.MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EmptyEnumerator.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::EmptyEnumerator::*)()>(&::System::Xml::EmptyEnumerator::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x434a870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EmptyEnumerator*>::get(), "System.Collections.IEnumerator.Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EmptyEnumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::EmptyEnumerator::*)()>(
    &::System::Xml::EmptyEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x434a874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EmptyEnumerator*>::get(), "System.Collections.IEnumerator.get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EmptyEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::EmptyEnumerator::*)()>(&::System::Xml::EmptyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x434a8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EmptyEnumerator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool System::Xml::EmptyEnumerator::System_Collections_IEnumerator_MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EmptyEnumerator*>::get(), "System.Collections.IEnumerator.MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::EmptyEnumerator::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EmptyEnumerator*>::get(), "System.Collections.IEnumerator.Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::EmptyEnumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EmptyEnumerator*>::get(), "System.Collections.IEnumerator.get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Xml::EmptyEnumerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EmptyEnumerator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::EmptyEnumerator* System::Xml::EmptyEnumerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::EmptyEnumerator*>());
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Xml::EmptyEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Xml::EmptyEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::EmptyEnumerator::EmptyEnumerator() {}
