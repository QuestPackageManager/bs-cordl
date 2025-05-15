#pragma once
// IWYU pragma private; include "System/Xml/Serialization/SerializationSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SerializationSource)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class SerializationSource;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::SerializationSource);
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.SerializationSource
class CORDL_TYPE SerializationSource : public ::System::Object {
public:
  // Declarations
  /// @brief Field canBeGenerated, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_canBeGenerated, put = __cordl_internal_set_canBeGenerated)) bool canBeGenerated;

  /// @brief Field includedTypes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_includedTypes, put = __cordl_internal_set_includedTypes)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> includedTypes;

  /// @brief Field namspace, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_namspace, put = __cordl_internal_set_namspace)) ::StringW namspace;

  /// @brief Method BaseEquals, addr 0x4368be4, size 0x10c, virtual false, abstract: false, final false
  inline bool BaseEquals(::System::Xml::Serialization::SerializationSource* other);

  static inline ::System::Xml::Serialization::SerializationSource* New_ctor(::StringW namspace, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> includedTypes);

  constexpr bool const& __cordl_internal_get_canBeGenerated() const;

  constexpr bool& __cordl_internal_get_canBeGenerated();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get_includedTypes() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get_includedTypes();

  constexpr ::StringW const& __cordl_internal_get_namspace() const;

  constexpr ::StringW& __cordl_internal_get_namspace();

  constexpr void __cordl_internal_set_canBeGenerated(bool value);

  constexpr void __cordl_internal_set_includedTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr void __cordl_internal_set_namspace(::StringW value);

  /// @brief Method .ctor, addr 0x4368bb0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW namspace, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> includedTypes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializationSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationSource(SerializationSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationSource(SerializationSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7400 };

  /// @brief Field includedTypes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ___includedTypes;

  /// @brief Field namspace, offset: 0x18, size: 0x8, def value: None
  ::StringW ___namspace;

  /// @brief Field canBeGenerated, offset: 0x20, size: 0x1, def value: None
  bool ___canBeGenerated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::SerializationSource, ___includedTypes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::SerializationSource, ___namspace) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::SerializationSource, ___canBeGenerated) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::SerializationSource, 0x28>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::SerializationSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::SerializationSource*, "System.Xml.Serialization", "SerializationSource");
