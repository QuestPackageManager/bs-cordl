#pragma once
// IWYU pragma private; include "Unity/Mathematics/AffineTransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AffineTransform)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct RigidTransform;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct float3x4;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct quaternion;
}
// Forward declare root types
namespace Unity::Mathematics {
struct AffineTransform;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::AffineTransform);
// Dependencies Unity.Mathematics.float3, Unity.Mathematics.float3x3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.AffineTransform
struct CORDL_TYPE AffineTransform {
public:
  // Declarations
  /// @brief Field identity, offset 0xffffffff, size 0x30
  __declspec(property(get = getStaticF_identity, put = setStaticF_identity)) ::Unity::Mathematics::AffineTransform identity;

  /// @brief Field zero, offset 0xffffffff, size 0x30
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::AffineTransform zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::AffineTransform>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::AffineTransform>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x6449020, size 0x12c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6448f54, size 0xcc, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::AffineTransform rhs);

  /// @brief Method GetHashCode, addr 0x644914c, size 0xc8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6449214, size 0x3a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x64495b4, size 0x39c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6448e74, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x4 m);

  /// @brief Method .ctor, addr 0x6448ea8, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x4 m);

  /// @brief Method .ctor, addr 0x6448e08, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::RigidTransform rigid);

  /// @brief Method .ctor, addr 0x6448d90, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x3 rotationScale);

  /// @brief Method .ctor, addr 0x6448c48, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::quaternion rotation);

  /// @brief Method .ctor, addr 0x6448cbc, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::quaternion rotation, ::Unity::Mathematics::float3 scale);

  /// @brief Method .ctor, addr 0x6448d74, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::float3x3 rotationScale);

  static inline ::Unity::Mathematics::AffineTransform getStaticF_identity();

  static inline ::Unity::Mathematics::AffineTransform getStaticF_zero();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::AffineTransform>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::AffineTransform>* i___System__IEquatable_1___Unity__Mathematics__AffineTransform_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Implicit, addr 0x6448ee8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Implicit___Unity__Mathematics__float3x4(::Unity::Mathematics::AffineTransform m);

  /// @brief Method op_Implicit, addr 0x6448efc, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Implicit___Unity__Mathematics__float4x4(::Unity::Mathematics::AffineTransform m);

  static inline void setStaticF_identity(::Unity::Mathematics::AffineTransform value);

  static inline void setStaticF_zero(::Unity::Mathematics::AffineTransform value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AffineTransform();

  // Ctor Parameters [CppParam { name: "rs", ty: "::Unity::Mathematics::float3x3", modifiers: "", def_value: None }, CppParam { name: "t", ty: "::Unity::Mathematics::float3", modifiers: "", def_value:
  // None }]
  constexpr AffineTransform(::Unity::Mathematics::float3x3 rs, ::Unity::Mathematics::float3 t) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13096 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field rs, offset: 0x0, size: 0x24, def value: None
  ::Unity::Mathematics::float3x3 rs;

  /// @brief Field t, offset: 0x24, size: 0xc, def value: None
  ::Unity::Mathematics::float3 t;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::AffineTransform, rs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::AffineTransform, t) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::AffineTransform, 0x30>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::AffineTransform, "Unity.Mathematics", "AffineTransform");
