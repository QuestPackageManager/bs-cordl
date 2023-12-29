#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VertexHelper)
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct UIVertex;
}
namespace UnityEngine {
struct Vector4;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace UnityEngine::UI {
class VertexHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::VertexHelper);
// Type: UnityEngine.UI::VertexHelper
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10173)), TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13146))
// CS Name: ::UnityEngine.UI::VertexHelper*
class CORDL_TYPE VertexHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Positions, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Positions, put = __set_m_Positions))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_Positions;

  /// @brief Field m_Colors, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Colors, put = __set_m_Colors))::System::Collections::Generic::List_1<::UnityEngine::Color32>* m_Colors;

  /// @brief Field m_Uv0S, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Uv0S, put = __set_m_Uv0S))::System::Collections::Generic::List_1<::UnityEngine::Vector4>* m_Uv0S;

  /// @brief Field m_Uv1S, offset 0x28, size 0x8
  __declspec(property(get = __get_m_Uv1S, put = __set_m_Uv1S))::System::Collections::Generic::List_1<::UnityEngine::Vector4>* m_Uv1S;

  /// @brief Field m_Uv2S, offset 0x30, size 0x8
  __declspec(property(get = __get_m_Uv2S, put = __set_m_Uv2S))::System::Collections::Generic::List_1<::UnityEngine::Vector4>* m_Uv2S;

  /// @brief Field m_Uv3S, offset 0x38, size 0x8
  __declspec(property(get = __get_m_Uv3S, put = __set_m_Uv3S))::System::Collections::Generic::List_1<::UnityEngine::Vector4>* m_Uv3S;

  /// @brief Field m_Normals, offset 0x40, size 0x8
  __declspec(property(get = __get_m_Normals, put = __set_m_Normals))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_Normals;

  /// @brief Field m_Tangents, offset 0x48, size 0x8
  __declspec(property(get = __get_m_Tangents, put = __set_m_Tangents))::System::Collections::Generic::List_1<::UnityEngine::Vector4>* m_Tangents;

  /// @brief Field m_Indices, offset 0x50, size 0x8
  __declspec(property(get = __get_m_Indices, put = __set_m_Indices))::System::Collections::Generic::List_1<int32_t>* m_Indices;

  /// @brief Field m_ListsInitalized, offset 0x58, size 0x1
  __declspec(property(get = __get_m_ListsInitalized, put = __set_m_ListsInitalized)) bool m_ListsInitalized;

  /// @brief Field s_DefaultTangent, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_DefaultTangent, put = setStaticF_s_DefaultTangent))::UnityEngine::Vector4 s_DefaultTangent;

  /// @brief Field s_DefaultNormal, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_s_DefaultNormal, put = setStaticF_s_DefaultNormal))::UnityEngine::Vector3 s_DefaultNormal;

  __declspec(property(get = get_currentVertCount)) int32_t currentVertCount;

  __declspec(property(get = get_currentIndexCount)) int32_t currentIndexCount;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __get_m_Positions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __get_m_Positions() const;

  constexpr void __set_m_Positions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color32>*& __get_m_Colors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Color32>*> const& __get_m_Colors() const;

  constexpr void __set_m_Colors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __get_m_Uv0S();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> const& __get_m_Uv0S() const;

  constexpr void __set_m_Uv0S(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __get_m_Uv1S();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> const& __get_m_Uv1S() const;

  constexpr void __set_m_Uv1S(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __get_m_Uv2S();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> const& __get_m_Uv2S() const;

  constexpr void __set_m_Uv2S(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __get_m_Uv3S();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> const& __get_m_Uv3S() const;

  constexpr void __set_m_Uv3S(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __get_m_Normals();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __get_m_Normals() const;

  constexpr void __set_m_Normals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __get_m_Tangents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> const& __get_m_Tangents() const;

  constexpr void __set_m_Tangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value);

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __get_m_Indices();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __get_m_Indices() const;

  constexpr void __set_m_Indices(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr bool& __get_m_ListsInitalized();

  constexpr bool const& __get_m_ListsInitalized() const;

  constexpr void __set_m_ListsInitalized(bool value);

  static inline void setStaticF_s_DefaultTangent(::UnityEngine::Vector4 value);

  static inline ::UnityEngine::Vector4 getStaticF_s_DefaultTangent();

  static inline void setStaticF_s_DefaultNormal(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_s_DefaultNormal();

  static inline ::UnityEngine::UI::VertexHelper* New_ctor();

  /// @brief Method .ctor addr 0x2c26ea8 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::UI::VertexHelper* New_ctor(::UnityEngine::Mesh* m);

  /// @brief Method .ctor addr 0x2c26eb0 size 0x238 virtual false final false
  inline void _ctor(::UnityEngine::Mesh* m);

  /// @brief Method InitializeListIfRequired addr 0x2c270e8 size 0x190 virtual false final false
  inline void InitializeListIfRequired();

  /// @brief Method Dispose addr 0x2c27278 size 0x1b4 virtual true final true
  inline void Dispose();

  /// @brief Method Clear addr 0x2c170f8 size 0x11c virtual false final false
  inline void Clear();

  /// @brief Method get_currentVertCount addr 0x2c2742c size 0x4c virtual false final false
  inline int32_t get_currentVertCount();

  /// @brief Method get_currentIndexCount addr 0x2c27478 size 0x4c virtual false final false
  inline int32_t get_currentIndexCount();

  /// @brief Method PopulateUIVertex addr 0x2c274c4 size 0x160 virtual false final false
  inline void PopulateUIVertex(ByRef<::UnityEngine::UIVertex> vertex, int32_t i);

  /// @brief Method SetUIVertex addr 0x2c27624 size 0x15c virtual false final false
  inline void SetUIVertex(::UnityEngine::UIVertex vertex, int32_t i);

  /// @brief Method FillMesh addr 0x2c27780 size 0x164 virtual false final false
  inline void FillMesh(::UnityEngine::Mesh* mesh);

  /// @brief Method AddVert addr 0x2c278e4 size 0x4fc virtual false final false
  inline void AddVert(::UnityEngine::Vector3 position, ::UnityEngine::Color32 color, ::UnityEngine::Vector4 uv0, ::UnityEngine::Vector4 uv1, ::UnityEngine::Vector4 uv2, ::UnityEngine::Vector4 uv3,
                      ::UnityEngine::Vector3 normal, ::UnityEngine::Vector4 tangent);

  /// @brief Method AddVert addr 0x2c27de0 size 0x110 virtual false final false
  inline void AddVert(::UnityEngine::Vector3 position, ::UnityEngine::Color32 color, ::UnityEngine::Vector4 uv0, ::UnityEngine::Vector4 uv1, ::UnityEngine::Vector3 normal,
                      ::UnityEngine::Vector4 tangent);

  /// @brief Method AddVert addr 0x2c17214 size 0x130 virtual false final false
  inline void AddVert(::UnityEngine::Vector3 position, ::UnityEngine::Color32 color, ::UnityEngine::Vector4 uv0);

  /// @brief Method AddVert addr 0x2c27ef0 size 0x94 virtual false final false
  inline void AddVert(::UnityEngine::UIVertex v);

  /// @brief Method AddTriangle addr 0x2c17344 size 0x17c virtual false final false
  inline void AddTriangle(int32_t idx0, int32_t idx1, int32_t idx2);

  /// @brief Method AddUIVertexQuad addr 0x2c23ed8 size 0x110 virtual false final false
  inline void AddUIVertexQuad(::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> verts);

  /// @brief Method AddUIVertexStream addr 0x2c27f84 size 0xac virtual false final false
  inline void AddUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<int32_t>* indices);

  /// @brief Method AddUIVertexTriangleStream addr 0x2c28030 size 0x50 virtual false final false
  inline void AddUIVertexTriangleStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts);

  /// @brief Method GetUIVertexStream addr 0x2c28080 size 0x50 virtual false final false
  inline void GetUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* stream);

  // Ctor Parameters [CppParam { name: "", ty: "VertexHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VertexHelper(VertexHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VertexHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VertexHelper(VertexHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VertexHelper();

public:
  /// @brief Field m_Positions, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ___m_Positions;

  /// @brief Field m_Colors, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Color32>* ___m_Colors;

  /// @brief Field m_Uv0S, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* ___m_Uv0S;

  /// @brief Field m_Uv1S, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* ___m_Uv1S;

  /// @brief Field m_Uv2S, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* ___m_Uv2S;

  /// @brief Field m_Uv3S, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* ___m_Uv3S;

  /// @brief Field m_Normals, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ___m_Normals;

  /// @brief Field m_Tangents, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* ___m_Tangents;

  /// @brief Field m_Indices, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_Indices;

  /// @brief Field m_ListsInitalized, offset: 0x58, size: 0x1, def value: None
  bool ___m_ListsInitalized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::VertexHelper, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::VertexHelper, ___m_Positions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::VertexHelper, ___m_Colors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::VertexHelper, ___m_Uv0S) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::VertexHelper, ___m_Uv1S) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::VertexHelper, ___m_Uv2S) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::VertexHelper, ___m_Uv3S) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::VertexHelper, ___m_Normals) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::VertexHelper, ___m_Tangents) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::VertexHelper, ___m_Indices) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::VertexHelper, ___m_ListsInitalized) == 0x58, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::VertexHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::VertexHelper*, "UnityEngine.UI", "VertexHelper");
