#pragma once
// IWYU pragma private; include "GlobalNamespace/SR.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SR)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class SR;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SR*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SR*, "", "SR");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SR
class CORDL_TYPE SR : public ::System::Object {
public:
  // Declarations
  /// @brief Method Format, addr 0x5f57bcc, size 0x8c, virtual false, abstract: false, final false
  static inline ::StringW Format(::StringW resourceFormat, /* [ParamArray] */ ::ArrayW<::System::Object*> args);

  /// @brief Method Format, addr 0x5f57c58, size 0xa4, virtual false, abstract: false, final false
  static inline ::StringW Format(::StringW resourceFormat, ::System::Object* p1);

  /// @brief Method Format, addr 0x5f57cfc, size 0xac, virtual false, abstract: false, final false
  static inline ::StringW Format(::StringW resourceFormat, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method Format, addr 0x5f57da8, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW Format(::StringW resourceFormat, ::System::Object* p1, ::System::Object* p2, ::System::Object* p3);

  /// @brief Method GetString, addr 0x5f57bc8, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetString(::StringW name);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SR();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SR", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SR(SR&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SR", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SR(SR const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16039 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SR) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
