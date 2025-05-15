#pragma once
// IWYU pragma private; include "UnityEngine/Assertions/Assert.hpp"
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
// Dependencies System.Object
namespace UnityEngine::Assertions {
// Is value type: false
// CS Name: UnityEngine.Assertions.Assert
class CORDL_TYPE _cordl_Assert : public ::System::Object {
public:
  // Declarations
  /// @brief Field raiseExceptions, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_raiseExceptions, put = setStaticF_raiseExceptions)) bool raiseExceptions;

  /// @brief Method AreEqual, addr 0x48d2308, size 0xc8, virtual false, abstract: false, final false
  static inline void AreEqual(::UnityEngine::Object* expected, ::UnityEngine::Object* actual, ::StringW message);

  /// @brief Method AreEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AreEqual(T expected, T actual);

  /// @brief Method AreEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AreEqual(T expected, T actual, ::StringW message);

  /// @brief Method AreEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AreEqual(T expected, T actual, ::StringW message, ::System::Collections::Generic::IEqualityComparer_1<T>* comparer);

  /// @brief Method AreEqual, addr 0x48d28a4, size 0x8c, virtual false, abstract: false, final false
  static inline void AreEqual(int32_t expected, int32_t actual);

  /// @brief Method Fail, addr 0x48d1f54, size 0x120, virtual false, abstract: false, final false
  static inline void Fail(::StringW message, ::StringW userMessage);

  /// @brief Method IsFalse, addr 0x48d2288, size 0x80, virtual false, abstract: false, final false
  static inline void IsFalse(bool condition, ::StringW message);

  /// @brief Method IsNotNull, addr 0x48d27e8, size 0xbc, virtual false, abstract: false, final false
  static inline void IsNotNull(::UnityEngine::Object* value, ::StringW message);

  /// @brief Method IsNotNull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IsNotNull(T value);

  /// @brief Method IsNotNull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IsNotNull(T value, ::StringW message);

  /// @brief Method IsNull, addr 0x48d25c4, size 0xbc, virtual false, abstract: false, final false
  static inline void IsNull(::UnityEngine::Object* value, ::StringW message);

  /// @brief Method IsNull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IsNull(T value);

  /// @brief Method IsNull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IsNull(T value, ::StringW message);

  /// @brief Method IsTrue, addr 0x48d20e8, size 0x6c, virtual false, abstract: false, final false
  static inline void IsTrue(bool condition);

  /// @brief Method IsTrue, addr 0x48d2154, size 0x80, virtual false, abstract: false, final false
  static inline void IsTrue(bool condition, ::StringW message);

  static inline bool getStaticF_raiseExceptions();

  static inline void setStaticF_raiseExceptions(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr _cordl_Assert();

public:
  // Ctor Parameters [CppParam { name: "", ty: "_cordl_Assert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  _cordl_Assert(_cordl_Assert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "_cordl_Assert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  _cordl_Assert(_cordl_Assert const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11324 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Assertions::_cordl_Assert, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Assertions
NEED_NO_BOX(::UnityEngine::Assertions::_cordl_Assert);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Assertions::_cordl_Assert*, "UnityEngine.Assertions", "Assert");
