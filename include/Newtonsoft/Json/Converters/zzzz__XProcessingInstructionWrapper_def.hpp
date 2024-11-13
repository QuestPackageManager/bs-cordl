#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XProcessingInstructionWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XProcessingInstructionWrapper)
namespace System::Xml::Linq {
class XProcessingInstruction;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XProcessingInstructionWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XProcessingInstructionWrapper);
// Type: Newtonsoft.Json.Converters::XProcessingInstructionWrapper
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Converters::XProcessingInstructionWrapper*
class CORDL_TYPE XProcessingInstructionWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper {
public:
  // Declarations
  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_ProcessingInstruction)) ::System::Xml::Linq::XProcessingInstruction* ProcessingInstruction;

  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  static inline ::Newtonsoft::Json::Converters::XProcessingInstructionWrapper* New_ctor(::System::Xml::Linq::XProcessingInstruction* processingInstruction);

  /// @brief Method .ctor, addr 0x3ee3eb8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XProcessingInstruction* processingInstruction);

  /// @brief Method get_LocalName, addr 0x3ee4a5c, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_ProcessingInstruction, addr 0x3ee49e4, size 0x78, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XProcessingInstruction* get_ProcessingInstruction();

  /// @brief Method get_Value, addr 0x3ee4a78, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x3ee4a94, size 0x6c, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XProcessingInstructionWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XProcessingInstructionWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XProcessingInstructionWrapper(XProcessingInstructionWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XProcessingInstructionWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XProcessingInstructionWrapper(XProcessingInstructionWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10469 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XProcessingInstructionWrapper, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XProcessingInstructionWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XProcessingInstructionWrapper*, "Newtonsoft.Json.Converters", "XProcessingInstructionWrapper");
