#pragma once
// IWYU pragma private; include "GlobalNamespace\SR.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SR)
namespace System::Globalization {
class CultureInfo;
}
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
  /// @brief Method Format, addr 0x5aac2e4, size 0xa4, virtual false, abstract: false, final false
  static inline ::StringW Format(::StringW resourceFormat, ::System::Object* p1);

  /// @brief Method Format, addr 0x5aad28c, size 0xac, virtual false, abstract: false, final false
  static inline ::StringW Format(::StringW resourceFormat, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method Format, addr 0x5aad338, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW Format(::StringW resourceFormat, ::System::Object* p1, ::System::Object* p2, ::System::Object* p3);

  /// @brief Method GetResourceString, addr 0x5aad3f4, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetResourceString(::StringW str);

  /// @brief Method GetString, addr 0x5aad280, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW GetString(::System::Globalization::CultureInfo* culture, ::StringW name, ::ArrayW<::System::Object*> args);

  /// @brief Method GetString, addr 0x5aad288, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetString(::StringW name);

  /// @brief Method GetString, addr 0x5aad20c, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW GetString(::StringW name, ::ArrayW<::System::Object*> args);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SR();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SR", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SR(SR&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SR", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SR(SR const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2222 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SR) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
