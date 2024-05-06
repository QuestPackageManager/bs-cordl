#pragma once
// IWYU pragma private; include "ModestTree/Assert.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Assert)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class ZenjectException;
}
// Forward declare root types
namespace ModestTree {
class _cordl_Assert;
}
// Write type traits
MARK_REF_PTR_T(::ModestTree::_cordl_Assert);
// Type: ModestTree::Assert
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ModestTree {
// Is value type: false
// CS Name: ::ModestTree::Assert*
class CORDL_TYPE _cordl_Assert : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateException, addr 0x3610d3c, size 0x74, virtual false, abstract: false, final false
  static inline ::Zenject::ZenjectException* CreateException();

  /// @brief Method CreateException, addr 0x3610db0, size 0x8c, virtual false, abstract: false, final false
  static inline ::Zenject::ZenjectException* CreateException(::System::Exception* innerException, ::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters);

  /// @brief Method CreateException, addr 0x360f674, size 0x64, virtual false, abstract: false, final false
  static inline ::Zenject::ZenjectException* CreateException(::StringW message);

  /// @brief Method CreateException, addr 0x360f904, size 0x84, virtual false, abstract: false, final false
  static inline ::Zenject::ZenjectException* CreateException(::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters);

  /// @brief Method DerivesFrom, addr 0x360f71c, size 0x138, virtual false, abstract: false, final false
  static inline void DerivesFrom(::System::Type* childType, ::System::Type* parentType);

  /// @brief Method DerivesFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void DerivesFrom(::System::Type* type);

  /// @brief Method DerivesFromOrEqual, addr 0x360f988, size 0x138, virtual false, abstract: false, final false
  static inline void DerivesFromOrEqual(::System::Type* childType, ::System::Type* parentType);

  /// @brief Method DerivesFromOrEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void DerivesFromOrEqual(::System::Type* type);

  /// @brief Method IsApproximately, addr 0x360fdf0, size 0x13c, virtual false, abstract: false, final false
  static inline void IsApproximately(float_t left, float_t right, float_t epsilon);

  /// @brief Method IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IsEmpty(::System::Collections::Generic::IList_1<T>* list);

  /// @brief Method IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IsEmpty(::System::Collections::Generic::IEnumerable_1<T>* sequence);

  /// @brief Method IsEqual, addr 0x360fb60, size 0x58, virtual false, abstract: false, final false
  static inline void IsEqual(::System::Object* left, ::System::Object* right);

  /// @brief Method IsEqual, addr 0x360fbb8, size 0x10c, virtual false, abstract: false, final false
  static inline void IsEqual(::System::Object* left, ::System::Object* right, ::StringW message);

  /// @brief Method IsEqual, addr 0x360fcc4, size 0x12c, virtual false, abstract: false, final false
  static inline void IsEqual(::System::Object* left, ::System::Object* right, ::System::Func_1<::StringW>* messageGenerator);

  /// @brief Method IsNotEmpty, addr 0x360f6d8, size 0x44, virtual false, abstract: false, final false
  static inline void IsNotEmpty(::StringW str);

  /// @brief Method IsNotEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IsNotEmpty(::System::Collections::Generic::IEnumerable_1<T>* val, ::StringW message);

  /// @brief Method IsNotEqual, addr 0x360ff2c, size 0x58, virtual false, abstract: false, final false
  static inline void IsNotEqual(::System::Object* left, ::System::Object* right);

  /// @brief Method IsNotEqual, addr 0x360ff84, size 0xdc, virtual false, abstract: false, final false
  static inline void IsNotEqual(::System::Object* left, ::System::Object* right, ::StringW message);

  /// @brief Method IsNotEqual, addr 0x3610060, size 0x12c, virtual false, abstract: false, final false
  static inline void IsNotEqual(::System::Object* left, ::System::Object* right, ::System::Func_1<::StringW>* messageGenerator);

  /// @brief Method IsNotNull, addr 0x361050c, size 0x38, virtual false, abstract: false, final false
  static inline void IsNotNull(::System::Object* val);

  /// @brief Method IsNotNull, addr 0x3610544, size 0x7c, virtual false, abstract: false, final false
  static inline void IsNotNull(::System::Object* val, ::StringW message);

  /// @brief Method IsNotNull, addr 0x36105c0, size 0xd0, virtual false, abstract: false, final false
  static inline void IsNotNull(::System::Object* val, ::StringW message, ::System::Object* p1);

  /// @brief Method IsNotNull, addr 0x3610690, size 0xf8, virtual false, abstract: false, final false
  static inline void IsNotNull(::System::Object* val, ::StringW message, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method IsNull, addr 0x361018c, size 0x80, virtual false, abstract: false, final false
  static inline void IsNull(::System::Object* val);

  /// @brief Method IsNull, addr 0x361020c, size 0x7c, virtual false, abstract: false, final false
  static inline void IsNull(::System::Object* val, ::StringW message);

  /// @brief Method IsNull, addr 0x3610288, size 0xd0, virtual false, abstract: false, final false
  static inline void IsNull(::System::Object* val, ::StringW message, ::System::Object* p1);

  /// @brief Method IsType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IsType(::System::Object* obj);

  /// @brief Method IsType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IsType(::System::Object* obj, ::StringW message);

  /// @brief Method That, addr 0x360f63c, size 0x38, virtual false, abstract: false, final false
  static inline void That(bool condition);

  /// @brief Method That, addr 0x3610994, size 0x48, virtual false, abstract: false, final false
  static inline void That(bool condition, ::StringW message);

  /// @brief Method That, addr 0x36109dc, size 0x98, virtual false, abstract: false, final false
  static inline void That(bool condition, ::StringW message, ::System::Object* p1);

  /// @brief Method That, addr 0x3610a74, size 0xc4, virtual false, abstract: false, final false
  static inline void That(bool condition, ::StringW message, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method That, addr 0x3610b38, size 0xec, virtual false, abstract: false, final false
  static inline void That(bool condition, ::StringW message, ::System::Object* p1, ::System::Object* p2, ::System::Object* p3);

  /// @brief Method Throws, addr 0x3610cf4, size 0x48, virtual false, abstract: false, final false
  static inline void Throws(::System::Action* action);

  /// @brief Method Throws, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TException> static inline void Throws(::System::Action* action);

  /// @brief Method Warn, addr 0x3610788, size 0xac, virtual false, abstract: false, final false
  static inline void Warn(bool condition);

  /// @brief Method Warn, addr 0x3610c24, size 0xd0, virtual false, abstract: false, final false
  static inline void Warn(bool condition, ::StringW message);

  /// @brief Method Warn, addr 0x36108ac, size 0xe8, virtual false, abstract: false, final false
  static inline void Warn(bool condition, ::System::Func_1<::StringW>* messageGenerator);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::_cordl_Assert, 0x10>, "Size mismatch!");

} // namespace ModestTree
NEED_NO_BOX(::ModestTree::_cordl_Assert);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::_cordl_Assert*, "ModestTree", "Assert");
