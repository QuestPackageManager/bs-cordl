#pragma once
// IWYU pragma private; include "System/Xml/Serialization/KeyHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyHelper)
namespace System::Text {
class StringBuilder;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class KeyHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::KeyHelper);
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.KeyHelper
class CORDL_TYPE KeyHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddField, addr 0x436661c, size 0x8, virtual false, abstract: false, final false
  static inline void AddField(::System::Text::StringBuilder* sb, int32_t n, ::StringW val);

  /// @brief Method AddField, addr 0x4366624, size 0xe4, virtual false, abstract: false, final false
  static inline void AddField(::System::Text::StringBuilder* sb, int32_t n, ::StringW val, ::StringW def);

  /// @brief Method AddField, addr 0x436681c, size 0xec, virtual false, abstract: false, final false
  static inline void AddField(::System::Text::StringBuilder* sb, int32_t n, ::System::Type* val);

  /// @brief Method AddField, addr 0x4366708, size 0xc, virtual false, abstract: false, final false
  static inline void AddField(::System::Text::StringBuilder* sb, int32_t n, bool val);

  /// @brief Method AddField, addr 0x4366714, size 0x50, virtual false, abstract: false, final false
  static inline void AddField(::System::Text::StringBuilder* sb, int32_t n, bool val, bool def);

  /// @brief Method AddField, addr 0x4366764, size 0xb8, virtual false, abstract: false, final false
  static inline void AddField(::System::Text::StringBuilder* sb, int32_t n, int32_t val, int32_t def);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyHelper(KeyHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyHelper(KeyHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7392 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::KeyHelper, 0x10>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::KeyHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::KeyHelper*, "System.Xml.Serialization", "KeyHelper");
