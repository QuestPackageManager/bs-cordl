#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__MeshArrays_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Vertex)
namespace UnityEngine::ProBuilder {
struct MeshArrays;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Mesh;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Vertex;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Vertex);
// Type: UnityEngine.ProBuilder::Vertex
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12166)), TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(10251)),
// TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10246))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(12218)) CS Name: ::UnityEngine.ProBuilder::Vertex*
class CORDL_TYPE Vertex : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Position, offset 0x10, size 0xc
  __declspec(property(get = __get_m_Position, put = __set_m_Position))::UnityEngine::Vector3 m_Position;

  /// @brief Field m_Color, offset 0x1c, size 0x10
  __declspec(property(get = __get_m_Color, put = __set_m_Color))::UnityEngine::Color m_Color;

  /// @brief Field m_Normal, offset 0x2c, size 0xc
  __declspec(property(get = __get_m_Normal, put = __set_m_Normal))::UnityEngine::Vector3 m_Normal;

  /// @brief Field m_Tangent, offset 0x38, size 0x10
  __declspec(property(get = __get_m_Tangent, put = __set_m_Tangent))::UnityEngine::Vector4 m_Tangent;

  /// @brief Field m_UV0, offset 0x48, size 0x8
  __declspec(property(get = __get_m_UV0, put = __set_m_UV0))::UnityEngine::Vector2 m_UV0;

  /// @brief Field m_UV2, offset 0x50, size 0x8
  __declspec(property(get = __get_m_UV2, put = __set_m_UV2))::UnityEngine::Vector2 m_UV2;

  /// @brief Field m_UV3, offset 0x58, size 0x10
  __declspec(property(get = __get_m_UV3, put = __set_m_UV3))::UnityEngine::Vector4 m_UV3;

  /// @brief Field m_UV4, offset 0x68, size 0x10
  __declspec(property(get = __get_m_UV4, put = __set_m_UV4))::UnityEngine::Vector4 m_UV4;

  /// @brief Field m_Attributes, offset 0x78, size 0x4
  __declspec(property(get = __get_m_Attributes, put = __set_m_Attributes))::UnityEngine::ProBuilder::MeshArrays m_Attributes;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector3 position;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  __declspec(property(get = get_normal, put = set_normal))::UnityEngine::Vector3 normal;

  __declspec(property(get = get_tangent, put = set_tangent))::UnityEngine::Vector4 tangent;

  __declspec(property(get = get_uv0, put = set_uv0))::UnityEngine::Vector2 uv0;

  __declspec(property(get = get_uv2, put = set_uv2))::UnityEngine::Vector2 uv2;

  __declspec(property(get = get_uv3, put = set_uv3))::UnityEngine::Vector4 uv3;

  __declspec(property(get = get_uv4, put = set_uv4))::UnityEngine::Vector4 uv4;

  __declspec(property(get = get_attributes))::UnityEngine::ProBuilder::MeshArrays attributes;

  __declspec(property(get = get_hasPosition, put = set_hasPosition)) bool hasPosition;

  __declspec(property(get = get_hasColor, put = set_hasColor)) bool hasColor;

  __declspec(property(get = get_hasNormal, put = set_hasNormal)) bool hasNormal;

  __declspec(property(get = get_hasTangent, put = set_hasTangent)) bool hasTangent;

  __declspec(property(get = get_hasUV0, put = set_hasUV0)) bool hasUV0;

  __declspec(property(get = get_hasUV2, put = set_hasUV2)) bool hasUV2;

  __declspec(property(get = get_hasUV3, put = set_hasUV3)) bool hasUV3;

  __declspec(property(get = get_hasUV4, put = set_hasUV4)) bool hasUV4;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::Vertex*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ProBuilder::Vertex*>*() noexcept;

  constexpr ::UnityEngine::Vector3& __get_m_Position();

  constexpr ::UnityEngine::Vector3 const& __get_m_Position() const;

  constexpr void __set_m_Position(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Color& __get_m_Color();

  constexpr ::UnityEngine::Color const& __get_m_Color() const;

  constexpr void __set_m_Color(::UnityEngine::Color value);

  constexpr ::UnityEngine::Vector3& __get_m_Normal();

  constexpr ::UnityEngine::Vector3 const& __get_m_Normal() const;

  constexpr void __set_m_Normal(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector4& __get_m_Tangent();

  constexpr ::UnityEngine::Vector4 const& __get_m_Tangent() const;

  constexpr void __set_m_Tangent(::UnityEngine::Vector4 value);

  constexpr ::UnityEngine::Vector2& __get_m_UV0();

  constexpr ::UnityEngine::Vector2 const& __get_m_UV0() const;

  constexpr void __set_m_UV0(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_m_UV2();

  constexpr ::UnityEngine::Vector2 const& __get_m_UV2() const;

  constexpr void __set_m_UV2(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector4& __get_m_UV3();

  constexpr ::UnityEngine::Vector4 const& __get_m_UV3() const;

  constexpr void __set_m_UV3(::UnityEngine::Vector4 value);

  constexpr ::UnityEngine::Vector4& __get_m_UV4();

  constexpr ::UnityEngine::Vector4 const& __get_m_UV4() const;

  constexpr void __set_m_UV4(::UnityEngine::Vector4 value);

  constexpr ::UnityEngine::ProBuilder::MeshArrays& __get_m_Attributes();

  constexpr ::UnityEngine::ProBuilder::MeshArrays const& __get_m_Attributes() const;

  constexpr void __set_m_Attributes(::UnityEngine::ProBuilder::MeshArrays value);

  /// @brief Method get_position, addr 0x2b80d24, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method set_position, addr 0x2b80d30, size 0x28, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method get_color, addr 0x2b80d84, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method set_color, addr 0x2b80d90, size 0x28, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method get_normal, addr 0x2b80de4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_normal();

  /// @brief Method set_normal, addr 0x2b80df0, size 0x28, virtual false, abstract: false, final false
  inline void set_normal(::UnityEngine::Vector3 value);

  /// @brief Method get_tangent, addr 0x2b80e44, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_tangent();

  /// @brief Method set_tangent, addr 0x2b80e50, size 0x28, virtual false, abstract: false, final false
  inline void set_tangent(::UnityEngine::Vector4 value);

  /// @brief Method get_uv0, addr 0x2b80ea4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_uv0();

  /// @brief Method set_uv0, addr 0x2b80eac, size 0x24, virtual false, abstract: false, final false
  inline void set_uv0(::UnityEngine::Vector2 value);

  /// @brief Method get_uv2, addr 0x2b80efc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_uv2();

  /// @brief Method set_uv2, addr 0x2b80f04, size 0x24, virtual false, abstract: false, final false
  inline void set_uv2(::UnityEngine::Vector2 value);

  /// @brief Method get_uv3, addr 0x2b80f54, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_uv3();

  /// @brief Method set_uv3, addr 0x2b80f60, size 0x28, virtual false, abstract: false, final false
  inline void set_uv3(::UnityEngine::Vector4 value);

  /// @brief Method get_uv4, addr 0x2b80fb4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_uv4();

  /// @brief Method set_uv4, addr 0x2b80fc0, size 0x28, virtual false, abstract: false, final false
  inline void set_uv4(::UnityEngine::Vector4 value);

  /// @brief Method get_attributes, addr 0x2b81014, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::MeshArrays get_attributes();

  /// @brief Method HasArrays, addr 0x2b8101c, size 0x10, virtual false, abstract: false, final false
  inline bool HasArrays(::UnityEngine::ProBuilder::MeshArrays attribute);

  /// @brief Method get_hasPosition, addr 0x2b8102c, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasPosition();

  /// @brief Method set_hasPosition, addr 0x2b80d58, size 0x2c, virtual false, abstract: false, final false
  inline void set_hasPosition(bool value);

  /// @brief Method get_hasColor, addr 0x2b81038, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasColor();

  /// @brief Method set_hasColor, addr 0x2b80db8, size 0x2c, virtual false, abstract: false, final false
  inline void set_hasColor(bool value);

  /// @brief Method get_hasNormal, addr 0x2b81044, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasNormal();

  /// @brief Method set_hasNormal, addr 0x2b80e18, size 0x2c, virtual false, abstract: false, final false
  inline void set_hasNormal(bool value);

  /// @brief Method get_hasTangent, addr 0x2b81050, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasTangent();

  /// @brief Method set_hasTangent, addr 0x2b80e78, size 0x2c, virtual false, abstract: false, final false
  inline void set_hasTangent(bool value);

  /// @brief Method get_hasUV0, addr 0x2b8105c, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasUV0();

  /// @brief Method set_hasUV0, addr 0x2b80ed0, size 0x2c, virtual false, abstract: false, final false
  inline void set_hasUV0(bool value);

  /// @brief Method get_hasUV2, addr 0x2b81068, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasUV2();

  /// @brief Method set_hasUV2, addr 0x2b80f28, size 0x2c, virtual false, abstract: false, final false
  inline void set_hasUV2(bool value);

  /// @brief Method get_hasUV3, addr 0x2b81074, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasUV3();

  /// @brief Method set_hasUV3, addr 0x2b80f88, size 0x2c, virtual false, abstract: false, final false
  inline void set_hasUV3(bool value);

  /// @brief Method get_hasUV4, addr 0x2b81080, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasUV4();

  /// @brief Method set_hasUV4, addr 0x2b80fe8, size 0x2c, virtual false, abstract: false, final false
  inline void set_hasUV4(bool value);

  static inline ::UnityEngine::ProBuilder::Vertex* New_ctor();

  /// @brief Method .ctor, addr 0x2b8108c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Equals, addr 0x2b81094, size 0x70, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2b81104, size 0x148, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ProBuilder::Vertex* other);

  /// @brief Method Equals, addr 0x2b8124c, size 0x178, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::ProBuilder::Vertex* other, ::UnityEngine::ProBuilder::MeshArrays mask);

  /// @brief Method GetHashCode, addr 0x2b813c4, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::ProBuilder::Vertex* New_ctor(::UnityEngine::ProBuilder::Vertex* vertex);

  /// @brief Method .ctor, addr 0x2b81430, size 0x190, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::Vertex* vertex);

  /// @brief Method op_Equality, addr 0x2b815c0, size 0x28, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::ProBuilder::Vertex* a, ::UnityEngine::ProBuilder::Vertex* b);

  /// @brief Method op_Inequality, addr 0x2b815e8, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::ProBuilder::Vertex* a, ::UnityEngine::ProBuilder::Vertex* b);

  /// @brief Method op_Addition, addr 0x2b8161c, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vertex* op_Addition(::UnityEngine::ProBuilder::Vertex* a, ::UnityEngine::ProBuilder::Vertex* b);

  /// @brief Method Add, addr 0x2b81620, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vertex* Add(::UnityEngine::ProBuilder::Vertex* a, ::UnityEngine::ProBuilder::Vertex* b);

  /// @brief Method Add, addr 0x2b81698, size 0x10c, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::ProBuilder::Vertex* b);

  /// @brief Method op_Subtraction, addr 0x2b817a4, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vertex* op_Subtraction(::UnityEngine::ProBuilder::Vertex* a, ::UnityEngine::ProBuilder::Vertex* b);

  /// @brief Method Subtract, addr 0x2b817a8, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vertex* Subtract(::UnityEngine::ProBuilder::Vertex* a, ::UnityEngine::ProBuilder::Vertex* b);

  /// @brief Method Subtract, addr 0x2b81820, size 0x10c, virtual false, abstract: false, final false
  inline void Subtract(::UnityEngine::ProBuilder::Vertex* b);

  /// @brief Method op_Multiply, addr 0x2b8192c, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vertex* op_Multiply(::UnityEngine::ProBuilder::Vertex* a, float_t value);

  /// @brief Method Multiply, addr 0x2b81930, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vertex* Multiply(::UnityEngine::ProBuilder::Vertex* a, float_t value);

  /// @brief Method Multiply, addr 0x2b819a8, size 0x44, virtual false, abstract: false, final false
  inline void Multiply(float_t value);

  /// @brief Method op_Division, addr 0x2b819ec, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vertex* op_Division(::UnityEngine::ProBuilder::Vertex* a, float_t value);

  /// @brief Method Divide, addr 0x2b819f0, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vertex* Divide(::UnityEngine::ProBuilder::Vertex* a, float_t value);

  /// @brief Method Divide, addr 0x2b81a68, size 0x48, virtual false, abstract: false, final false
  inline void Divide(float_t value);

  /// @brief Method Normalize, addr 0x2b81ab0, size 0x554, virtual false, abstract: false, final false
  inline void Normalize();

  /// @brief Method ToString, addr 0x2b82004, size 0x314, virtual false, abstract: false, final false
  /// @param args: ::StringW (default: nullptr)
  inline ::StringW ToString(::StringW args = nullptr);

  /// @brief Method GetArrays, addr 0x2b82318, size 0x28, virtual false, abstract: false, final false
  static inline void GetArrays(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                               ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> position, ByRef<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>> color,
                               ByRef<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>> uv0, ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> normal,
                               ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>> tangent, ByRef<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>> uv2,
                               ByRef<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> uv3, ByRef<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> uv4);

  /// @brief Method GetArrays, addr 0x2b82340, size 0x97c, virtual false, abstract: false, final false
  static inline void GetArrays(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                               ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> position, ByRef<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>> color,
                               ByRef<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>> uv0, ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> normal,
                               ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>> tangent, ByRef<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>> uv2,
                               ByRef<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> uv3, ByRef<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> uv4,
                               ::UnityEngine::ProBuilder::MeshArrays attributes);

  /// @brief Method SetMesh, addr 0x2b82cbc, size 0x2c0, virtual false, abstract: false, final false
  static inline void SetMesh(::UnityEngine::Mesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices);

  /// @brief Method Average, addr 0x2b82f7c, size 0xb24, virtual false, abstract: false, final false
  /// @param indexes: ::System::Collections::Generic::IList_1<int32_t>* (default: nullptr)
  static inline ::UnityEngine::ProBuilder::Vertex* Average(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                                                           ::System::Collections::Generic::IList_1<int32_t>* indexes = nullptr);

  /// @brief Method Mix, addr 0x2b83aa0, size 0x2f8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vertex* Mix(::UnityEngine::ProBuilder::Vertex* x, ::UnityEngine::ProBuilder::Vertex* y, float_t weight);

  // Ctor Parameters [CppParam { name: "", ty: "Vertex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vertex(Vertex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vertex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vertex(Vertex const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vertex();

public:
  /// @brief Field m_Position, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Position;

  /// @brief Field m_Color, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Color ___m_Color;

  /// @brief Field m_Normal, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Normal;

  /// @brief Field m_Tangent, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___m_Tangent;

  /// @brief Field m_UV0, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_UV0;

  /// @brief Field m_UV2, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_UV2;

  /// @brief Field m_UV3, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___m_UV3;

  /// @brief Field m_UV4, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___m_UV4;

  /// @brief Field m_Attributes, offset: 0x78, size: 0x4, def value: None
  ::UnityEngine::ProBuilder::MeshArrays ___m_Attributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Vertex, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Vertex, ___m_Position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Vertex, ___m_Color) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Vertex, ___m_Normal) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Vertex, ___m_Tangent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Vertex, ___m_UV0) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Vertex, ___m_UV2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Vertex, ___m_UV3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Vertex, ___m_UV4) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Vertex, ___m_Attributes) == 0x78, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Vertex);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Vertex*, "UnityEngine.ProBuilder", "Vertex");
