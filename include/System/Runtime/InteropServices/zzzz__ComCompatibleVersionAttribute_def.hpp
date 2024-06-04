#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/ComCompatibleVersionAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComCompatibleVersionAttribute)
// Forward declare root types
namespace System::Runtime::InteropServices {
class ComCompatibleVersionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::ComCompatibleVersionAttribute);
// Type: System.Runtime.InteropServices::ComCompatibleVersionAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: ::System.Runtime.InteropServices::ComCompatibleVersionAttribute*
class CORDL_TYPE ComCompatibleVersionAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _build, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__build, put = __cordl_internal_set__build)) int32_t _build;

  /// @brief Field _major, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__major, put = __cordl_internal_set__major)) int32_t _major;

  /// @brief Field _minor, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__minor, put = __cordl_internal_set__minor)) int32_t _minor;

  /// @brief Field _revision, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__revision, put = __cordl_internal_set__revision)) int32_t _revision;

  static inline ::System::Runtime::InteropServices::ComCompatibleVersionAttribute* New_ctor(int32_t major, int32_t minor, int32_t build, int32_t revision);

  constexpr int32_t const& __cordl_internal_get__build() const;

  constexpr int32_t& __cordl_internal_get__build();

  constexpr int32_t const& __cordl_internal_get__major() const;

  constexpr int32_t& __cordl_internal_get__major();

  constexpr int32_t const& __cordl_internal_get__minor() const;

  constexpr int32_t& __cordl_internal_get__minor();

  constexpr int32_t const& __cordl_internal_get__revision() const;

  constexpr int32_t& __cordl_internal_get__revision();

  constexpr void __cordl_internal_set__build(int32_t value);

  constexpr void __cordl_internal_set__major(int32_t value);

  constexpr void __cordl_internal_set__minor(int32_t value);

  constexpr void __cordl_internal_set__revision(int32_t value);

  /// @brief Method .ctor, addr 0x28717c4, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(int32_t major, int32_t minor, int32_t build, int32_t revision);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComCompatibleVersionAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComCompatibleVersionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComCompatibleVersionAttribute(ComCompatibleVersionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComCompatibleVersionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComCompatibleVersionAttribute(ComCompatibleVersionAttribute const&) = delete;

  /// @brief Field _major, offset: 0x10, size: 0x4, def value: None
  int32_t ____major;

  /// @brief Field _minor, offset: 0x14, size: 0x4, def value: None
  int32_t ____minor;

  /// @brief Field _build, offset: 0x18, size: 0x4, def value: None
  int32_t ____build;

  /// @brief Field _revision, offset: 0x1c, size: 0x4, def value: None
  int32_t ____revision;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::ComCompatibleVersionAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::ComCompatibleVersionAttribute, ____major) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::ComCompatibleVersionAttribute, ____minor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::ComCompatibleVersionAttribute, ____build) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::ComCompatibleVersionAttribute, ____revision) == 0x1c, "Offset mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::ComCompatibleVersionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::ComCompatibleVersionAttribute*, "System.Runtime.InteropServices", "ComCompatibleVersionAttribute");
