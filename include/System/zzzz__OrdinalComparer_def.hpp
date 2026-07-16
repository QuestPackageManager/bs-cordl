#pragma once
// IWYU pragma private; include "System/OrdinalComparer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__StringComparer_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OrdinalComparer)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class OrdinalComparer;
}
// Write type traits
MARK_REF_T(::System::OrdinalComparer*);
DEFINE_IL2CPP_CLASS(::System::OrdinalComparer*, "System", "OrdinalComparer");
// Dependencies System.StringComparer
namespace System {
// Is value type: false
// CS Name: System.OrdinalComparer
class CORDL_TYPE OrdinalComparer : public ::System::StringComparer {
public:
  // Declarations
  /// @brief Field _ignoreCase, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__ignoreCase, put = __cordl_internal_set__ignoreCase)) bool _ignoreCase;

  /// @brief Method Compare, addr 0x5c5c2a0, size 0x64, virtual true, abstract: false, final false
  inline int32_t Compare(::StringW x, ::StringW y);

  /// @brief Method Equals, addr 0x5c5c420, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x5c5c304, size 0x84, virtual true, abstract: false, final false
  inline bool Equals(::StringW x, ::StringW y);

  /// @brief Method GetHashCode, addr 0x5c5c4b8, size 0x68, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetHashCode, addr 0x5c5c388, size 0x98, virtual true, abstract: false, final false
  inline int32_t GetHashCode(::StringW obj);

  static inline ::System::OrdinalComparer* New_ctor(bool ignoreCase);

  constexpr bool const& __cordl_internal_get__ignoreCase() const;

  constexpr bool& __cordl_internal_get__ignoreCase();

  constexpr void __cordl_internal_set__ignoreCase(bool value);

  /// @brief Method .ctor, addr 0x5c5c238, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(bool ignoreCase);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OrdinalComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OrdinalComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OrdinalComparer(OrdinalComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OrdinalComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OrdinalComparer(OrdinalComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2481 };

  /// @brief Field _ignoreCase, offset: 0x10, size: 0x1, def value: None
  bool ____ignoreCase;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::OrdinalComparer, ____ignoreCase) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::OrdinalComparer) == 0x18, "Size mismatch!");

} // namespace System
