#pragma once
// IWYU pragma private; include "UnityEngine/MakeSerializableAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(MakeSerializableAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine {
class MakeSerializableAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::MakeSerializableAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::MakeSerializableAttribute*, "UnityEngine", "MakeSerializableAttribute");
// [AttributeUsage((System.AttributeTargets)1, AllowMultiple = true)]
// [RequiredByNativeCode]
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.MakeSerializableAttribute
class CORDL_TYPE MakeSerializableAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field serializableType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_serializableType, put = __cordl_internal_set_serializableType)) ::System::Type* serializableType;

  /// [RequiredByNativeCode]
  /// @brief Method GetSerializableType, addr 0x6f470e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* GetSerializableType();

  constexpr ::System::Type* const& __cordl_internal_get_serializableType() const;

  constexpr ::System::Type*& __cordl_internal_get_serializableType();

  constexpr void __cordl_internal_set_serializableType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MakeSerializableAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MakeSerializableAttribute", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MakeSerializableAttribute(MakeSerializableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MakeSerializableAttribute", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MakeSerializableAttribute(MakeSerializableAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9978 };

  /// @brief Field serializableType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___serializableType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::MakeSerializableAttribute, ___serializableType) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::MakeSerializableAttribute) == 0x18, "Size mismatch!");

} // namespace UnityEngine
