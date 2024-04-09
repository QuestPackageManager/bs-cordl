#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__StringComparer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::System::OrdinalComparer);
// Type: System::OrdinalComparer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::OrdinalComparer*
class CORDL_TYPE OrdinalComparer : public ::System::StringComparer {
public:
  // Declarations
  /// @brief Field _ignoreCase, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__ignoreCase, put = __cordl_internal_set__ignoreCase)) bool _ignoreCase;

  /// @brief Method Compare, addr 0x2845f88, size 0x58, virtual true, abstract: false, final false
  inline int32_t Compare(::StringW x, ::StringW y);

  /// @brief Method Equals, addr 0x28460e8, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2845fe0, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::StringW x, ::StringW y);

  /// @brief Method GetHashCode, addr 0x2846180, size 0x64, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetHashCode, addr 0x2846060, size 0x88, virtual true, abstract: false, final false
  inline int32_t GetHashCode(::StringW obj);

  static inline ::System::OrdinalComparer* New_ctor(bool ignoreCase);

  constexpr bool const& __cordl_internal_get__ignoreCase() const;

  constexpr bool& __cordl_internal_get__ignoreCase();

  constexpr void __cordl_internal_set__ignoreCase(bool value);

  /// @brief Method .ctor, addr 0x2845f1c, size 0x6c, virtual false, abstract: false, final false
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

  /// @brief Field _ignoreCase, offset: 0x10, size: 0x1, def value: None
  bool ____ignoreCase;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::OrdinalComparer, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::OrdinalComparer, ____ignoreCase) == 0x10, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::OrdinalComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::OrdinalComparer*, "System", "OrdinalComparer");
