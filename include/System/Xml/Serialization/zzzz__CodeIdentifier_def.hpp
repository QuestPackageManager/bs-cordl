#pragma once
// IWYU pragma private; include "System/Xml/Serialization/CodeIdentifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CodeIdentifier)
namespace Microsoft::CSharp {
class CodeDomProvider;
}
// Forward declare root types
namespace System::Xml::Serialization {
class CodeIdentifier;
}
// Write type traits
MARK_REF_T(::System::Xml::Serialization::CodeIdentifier*);
DEFINE_IL2CPP_CLASS(::System::Xml::Serialization::CodeIdentifier*, "System.Xml.Serialization", "CodeIdentifier");
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.CodeIdentifier
class CORDL_TYPE CodeIdentifier : public ::System::Object {
public:
  // Declarations
  /// @brief Field csharp, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_csharp, put = setStaticF_csharp)) ::Microsoft::CSharp::CodeDomProvider* csharp;

  /// @brief Method IsValid, addr 0x62e53ac, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsValid(char16_t c);

  /// @brief Method IsValidStart, addr 0x62e53f8, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsValidStart(char16_t c);

  /// @brief Method MakePascal, addr 0x62e5094, size 0x1a0, virtual false, abstract: false, final false
  static inline ::StringW MakePascal(::StringW identifier);

  /// @brief Method MakeValid, addr 0x62e5234, size 0x178, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9446 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::Serialization::CodeIdentifier) == 0x10, "Size mismatch!");

} // namespace System::Xml::Serialization
