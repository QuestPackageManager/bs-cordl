#pragma once
// IWYU pragma private; include "System/Xml/Schema/ChameleonKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChameleonKey)
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml::Schema {
class ChameleonKey;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::ChameleonKey);
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.ChameleonKey
class CORDL_TYPE ChameleonKey : public ::System::Object {
public:
  // Declarations
  /// @brief Field chameleonLocation, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_chameleonLocation, put = __cordl_internal_set_chameleonLocation)) ::System::Uri* chameleonLocation;

  /// @brief Field hashCode, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_hashCode, put = __cordl_internal_set_hashCode)) int32_t hashCode;

  /// @brief Field originalSchema, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_originalSchema, put = __cordl_internal_set_originalSchema)) ::System::Xml::Schema::XmlSchema* originalSchema;

  /// @brief Field targetNS, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_targetNS, put = __cordl_internal_set_targetNS)) ::StringW targetNS;

  /// @brief Method Equals, addr 0x439cdec, size 0xdc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x439cd6c, size 0x80, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Xml::Schema::ChameleonKey* New_ctor(::StringW ns, ::System::Xml::Schema::XmlSchema* originalSchema);

  constexpr ::System::Uri* const& __cordl_internal_get_chameleonLocation() const;

  constexpr ::System::Uri*& __cordl_internal_get_chameleonLocation();

  constexpr int32_t const& __cordl_internal_get_hashCode() const;

  constexpr int32_t& __cordl_internal_get_hashCode();

  constexpr ::System::Xml::Schema::XmlSchema* const& __cordl_internal_get_originalSchema() const;

  constexpr ::System::Xml::Schema::XmlSchema*& __cordl_internal_get_originalSchema();

  constexpr ::StringW const& __cordl_internal_get_targetNS() const;

  constexpr ::StringW& __cordl_internal_get_targetNS();

  constexpr void __cordl_internal_set_chameleonLocation(::System::Uri* value);

  constexpr void __cordl_internal_set_hashCode(int32_t value);

  constexpr void __cordl_internal_set_originalSchema(::System::Xml::Schema::XmlSchema* value);

  constexpr void __cordl_internal_set_targetNS(::StringW value);

  /// @brief Method .ctor, addr 0x439cd14, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::StringW ns, ::System::Xml::Schema::XmlSchema* originalSchema);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChameleonKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChameleonKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChameleonKey(ChameleonKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChameleonKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChameleonKey(ChameleonKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7484 };

  /// @brief Field targetNS, offset: 0x10, size: 0x8, def value: None
  ::StringW ___targetNS;

  /// @brief Field chameleonLocation, offset: 0x18, size: 0x8, def value: None
  ::System::Uri* ___chameleonLocation;

  /// @brief Field originalSchema, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchema* ___originalSchema;

  /// @brief Field hashCode, offset: 0x28, size: 0x4, def value: None
  int32_t ___hashCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::ChameleonKey, ___targetNS) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ChameleonKey, ___chameleonLocation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ChameleonKey, ___originalSchema) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ChameleonKey, ___hashCode) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::ChameleonKey, 0x30>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::ChameleonKey);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ChameleonKey*, "System.Xml.Schema", "ChameleonKey");
