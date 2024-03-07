#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__EmptyEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::*)()>(
    &::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11ee018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::*)()>(
    &::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11ee020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::*)()>(
    &::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x11ee028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator*>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::*)()>(
    &::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x11ee02c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator*>::get(), "get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
inline void Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::setStaticF_Instance(::System::Collections::IEnumerator* value) {
  ::cordl_internals::setStaticField<::System::Collections::IEnumerator*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator*>::get>(
      std::forward<::System::Collections::IEnumerator*>(value));
}
inline ::System::Collections::IEnumerator* Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Collections::IEnumerator*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator*>::get>();
}
inline ::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator* Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator*>());
}
inline void Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator*>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator*>::get(), "get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::EmptyEnumerator() {}
