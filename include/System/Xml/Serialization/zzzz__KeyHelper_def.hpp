#pragma once
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
// Type: System.Xml.Serialization::KeyHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::KeyHelper*
class CORDL_TYPE KeyHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddField, addr 0x2ec3228, size 0x8, virtual false, abstract: false, final false
  static inline void AddField(::System::Text::StringBuilder* sb, int32_t n, ::StringW val);

  /// @brief Method AddField, addr 0x2ec3230, size 0xe4, virtual false, abstract: false, final false
  static inline void AddField(::System::Text::StringBuilder* sb, int32_t n, ::StringW val, ::StringW def);

  /// @brief Method AddField, addr 0x2ec3420, size 0xec, virtual false, abstract: false, final false
  static inline void AddField(::System::Text::StringBuilder* sb, int32_t n, ::System::Type* val);

  /// @brief Method AddField, addr 0x2ec3314, size 0xc, virtual false, abstract: false, final false
  static inline void AddField(::System::Text::StringBuilder* sb, int32_t n, bool val);

  /// @brief Method AddField, addr 0x2ec3320, size 0x48, virtual false, abstract: false, final false
  static inline void AddField(::System::Text::StringBuilder* sb, int32_t n, bool val, bool def);

  /// @brief Method AddField, addr 0x2ec3368, size 0xb8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::KeyHelper, 0x10>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::KeyHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::KeyHelper*, "System.Xml.Serialization", "KeyHelper");
