#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CodeIdentifier)
namespace Microsoft::CSharp {
class CodeDomProvider;
}
// Forward declare root types
namespace System::Xml::Serialization {
class CodeIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::CodeIdentifier);
// Type: System.Xml.Serialization::CodeIdentifier
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::CodeIdentifier*
class CORDL_TYPE CodeIdentifier : public ::System::Object {
public:
  // Declarations
  /// @brief Field csharp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_csharp, put = setStaticF_csharp))::Microsoft::CSharp::CodeDomProvider* csharp;

  /// @brief Method IsValid, addr 0x2ec22d8, size 0x7c, virtual false, abstract: false, final false
  static inline bool IsValid(char16_t c);

  /// @brief Method IsValidStart, addr 0x2ec2354, size 0x64, virtual false, abstract: false, final false
  static inline bool IsValidStart(char16_t c);

  /// @brief Method MakePascal, addr 0x2ec1fb0, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW MakePascal(::StringW identifier);

  /// @brief Method MakeValid, addr 0x2ec2158, size 0x180, virtual false, abstract: false, final false
  static inline ::StringW MakeValid(::StringW identifier);

  static inline ::Microsoft::CSharp::CodeDomProvider* getStaticF_csharp();

  static inline void setStaticF_csharp(::Microsoft::CSharp::CodeDomProvider* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CodeIdentifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CodeIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CodeIdentifier(CodeIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CodeIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CodeIdentifier(CodeIdentifier const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::CodeIdentifier, 0x10>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::CodeIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::CodeIdentifier*, "System.Xml.Serialization", "CodeIdentifier");
