#pragma once
// IWYU pragma private; include "System/Object.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Object)
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class Object;
}
// Write type traits
MARK_REF_T(::System::Object*);
DEFINE_IL2CPP_CLASS(::System::Object*, "System", "Object");
// Dependencies
namespace System {
// Is value type: false
// CS Name: System.Object
class CORDL_TYPE Object : public Il2CppObject {
public:
  // Declarations
  /// @brief Method Equals, addr 0x5c955b4, size 0xc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x5c955c0, size 0x2c, virtual false, abstract: false, final false
  static inline bool Equals(::System::Object* objA, ::System::Object* objB);

  /// @brief Method FieldGetter, addr 0x5c9564c, size 0x4, virtual false, abstract: false, final false
  inline void FieldGetter(::StringW typeName, ::StringW fieldName, ::by_ref<::System::Object*> val);

  /// @brief Method FieldSetter, addr 0x5c95650, size 0x4, virtual false, abstract: false, final false
  inline void FieldSetter(::StringW typeName, ::StringW fieldName, ::System::Object* val);

  /// @brief Method Finalize, addr 0x5c955ec, size 0x4, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetHashCode, addr 0x5c955f0, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetType, addr 0x5c8842c, size 0xc, virtual false, abstract: false, final false
  inline ::System::Type* GetType();

  /// @brief Method InternalGetHashCode, addr 0x5c95604, size 0x14, virtual false, abstract: false, final false
  static inline int32_t InternalGetHashCode(::System::Object* o);

  /// @brief Method MemberwiseClone, addr 0x5c8fc0c, size 0x4, virtual false, abstract: false, final false
  inline ::System::Object* MemberwiseClone();

  static inline ::System::Object* New_ctor();

  /// @brief Method ReferenceEquals, addr 0x5c95640, size 0xc, virtual false, abstract: false, final false
  static inline bool ReferenceEquals(::System::Object* objA, ::System::Object* objB);

  /// @brief Method ToString, addr 0x5c95618, size 0x28, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x5c87cf4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Object();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Object", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Object(Object&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Object", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Object(Object const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2623 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Object) == 0x10, "Size mismatch!");

} // namespace System
