#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/MathUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MathUtils)
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class MathUtils;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::MathUtils);
// Type: Newtonsoft.Json.Utilities::MathUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Utilities::MathUtils*
class CORDL_TYPE MathUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method ApproxEquals, addr 0x3e6fe70, size 0xa0, virtual false, abstract: false, final false
  static inline bool ApproxEquals(double_t d1, double_t d2);

  /// @brief Method IntLength, addr 0x3e6f9d8, size 0x1c4, virtual false, abstract: false, final false
  static inline int32_t IntLength(uint64_t i);

  /// @brief Method IntToHex, addr 0x3e6fb9c, size 0x18, virtual false, abstract: false, final false
  static inline char16_t IntToHex(int32_t n);

  /// @brief Method Max, addr 0x3e6fd74, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<double_t> Max(::System::Nullable_1<double_t> val1, ::System::Nullable_1<double_t> val2);

  /// @brief Method Max, addr 0x3e6fc94, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<int32_t> Max(::System::Nullable_1<int32_t> val1, ::System::Nullable_1<int32_t> val2);

  /// @brief Method Min, addr 0x3e6fbb4, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<int32_t> Min(::System::Nullable_1<int32_t> val1, ::System::Nullable_1<int32_t> val2);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MathUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MathUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MathUtils(MathUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MathUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MathUtils(MathUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10228 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::MathUtils, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::MathUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::MathUtils*, "Newtonsoft.Json.Utilities", "MathUtils");
