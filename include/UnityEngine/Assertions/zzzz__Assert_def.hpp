#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Assert)
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Assertions {
class _cordl_Assert;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Assertions::_cordl_Assert);
// Type: UnityEngine.Assertions::Assert
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Assertions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10314))
// CS Name: ::UnityEngine.Assertions::Assert*
class CORDL_TYPE _cordl_Assert : public ::System::Object {
public:
  // Declarations
  /// @brief Field raiseExceptions, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_raiseExceptions, put = setStaticF_raiseExceptions)) bool raiseExceptions;

  static inline void setStaticF_raiseExceptions(bool value);

  static inline bool getStaticF_raiseExceptions();

  /// @brief Method IsTrue addr 0x2ce8ee4 size 0x6c virtual false final false
  static inline void IsTrue(bool condition);

  /// @brief Method IsTrue addr 0x2ce8f50 size 0x80 virtual false final false
  static inline void IsTrue(bool condition, ::StringW message);

  /// @brief Method IsFalse addr 0x2ce9188 size 0x80 virtual false final false
  static inline void IsFalse(bool condition, ::StringW message);

  /// @brief Method IsNull addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void IsNull(T value);

  /// @brief Method IsNull addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void IsNull(T value, ::StringW message);

  /// @brief Method IsNull addr 0x2ce9208 size 0xbc virtual false final false
  static inline void IsNull(::UnityEngine::Object* value, ::StringW message);

  /// @brief Method IsNotNull addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void IsNotNull(T value);

  /// @brief Method IsNotNull addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void IsNotNull(T value, ::StringW message);

  /// @brief Method IsNotNull addr 0x2ce942c size 0xbc virtual false final false
  static inline void IsNotNull(::UnityEngine::Object* value, ::StringW message);

  /// @brief Method Fail addr 0x2ce9060 size 0x128 virtual false final false
  static inline void Fail(::StringW message, ::StringW userMessage);

  /// @brief Method AreEqual addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void AreEqual(T expected, T actual);

  /// @brief Method AreEqual addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void AreEqual(T expected, T actual, ::StringW message);

  /// @brief Method AreEqual addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void AreEqual(T expected, T actual, ::StringW message, ::System::Collections::Generic::IEqualityComparer_1<T>* comparer);

  /// @brief Method AreEqual addr 0x2ce955c size 0xc8 virtual false final false
  static inline void AreEqual(::UnityEngine::Object* expected, ::UnityEngine::Object* actual, ::StringW message);

  /// @brief Method AreNotEqual addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void AreNotEqual(T expected, T actual);

  /// @brief Method AreNotEqual addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void AreNotEqual(T expected, T actual, ::StringW message);

  /// @brief Method AreNotEqual addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void AreNotEqual(T expected, T actual, ::StringW message, ::System::Collections::Generic::IEqualityComparer_1<T>* comparer);

  /// @brief Method AreNotEqual addr 0x2ce9818 size 0xc8 virtual false final false
  static inline void AreNotEqual(::UnityEngine::Object* expected, ::UnityEngine::Object* actual, ::StringW message);

  /// @brief Method AreEqual addr 0x2ce98e0 size 0x8c virtual false final false
  static inline void AreEqual(int32_t expected, int32_t actual);

  // Ctor Parameters [CppParam { name: "", ty: "_cordl_Assert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  _cordl_Assert(_cordl_Assert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "_cordl_Assert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  _cordl_Assert(_cordl_Assert const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr _cordl_Assert();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Assertions::_cordl_Assert, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Assertions
NEED_NO_BOX(::UnityEngine::Assertions::_cordl_Assert);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Assertions::_cordl_Assert*, "UnityEngine.Assertions", "Assert");
