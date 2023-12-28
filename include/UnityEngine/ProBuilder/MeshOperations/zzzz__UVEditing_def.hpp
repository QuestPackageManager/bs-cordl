#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UVEditing)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __UVEditing____c;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __UVEditing____c__DisplayClass0_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __UVEditing____c__DisplayClass4_0;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class UVEditing;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __UVEditing____c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __UVEditing____c__DisplayClass0_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __UVEditing____c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::UVEditing);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c__DisplayClass0_0);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c__DisplayClass4_0);
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12286))
// CS Name: ::UVEditing::<>c__DisplayClass0_0*
class CORDL_TYPE __UVEditing____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field f1, offset 0x10, size 0x8
  __declspec(property(get = __get_f1, put = __set_f1))::UnityEngine::ProBuilder::Face* f1;

  /// @brief Field f2, offset 0x18, size 0x8
  __declspec(property(get = __get_f2, put = __set_f2))::UnityEngine::ProBuilder::Face* f2;

  constexpr ::UnityEngine::ProBuilder::Face*& __get_f1();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Face*> const& __get_f1() const;

  constexpr void __set_f1(::UnityEngine::ProBuilder::Face* value);

  constexpr ::UnityEngine::ProBuilder::Face*& __get_f2();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Face*> const& __get_f2() const;

  constexpr void __set_f2(::UnityEngine::ProBuilder::Face* value);

  static inline ::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c__DisplayClass0_0* New_ctor();

  /// @brief Method .ctor addr 0x2bc364c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <AutoStitch>b__0 addr 0x2bc671c size 0x44 virtual false final false
  inline bool _AutoStitch_b__0(::UnityEngine::ProBuilder::WingedEdge* x);

  // Ctor Parameters [CppParam { name: "", ty: "__UVEditing____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UVEditing____c__DisplayClass0_0(__UVEditing____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UVEditing____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UVEditing____c__DisplayClass0_0(__UVEditing____c__DisplayClass0_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UVEditing____c__DisplayClass0_0();

public:
  /// @brief Field f1, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Face* ___f1;

  /// @brief Field f2, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Face* ___f2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c__DisplayClass0_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12287))
// CS Name: ::UVEditing::<>c*
class CORDL_TYPE __UVEditing____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0))::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* __9__2_0;

  /// @brief Field <>9__4_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_1, put = setStaticF___9__4_1))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, int32_t>* __9__4_1;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0,
                             put = setStaticF___9__8_0))::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* __9__8_0;

  /// @brief Field <>9__8_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_1,
                             put = setStaticF___9__8_1))::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* __9__8_1;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_0,
                             put = setStaticF___9__9_0))::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* __9__9_0;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_0,
                             put = setStaticF___9__11_0))::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* __9__11_0;

  static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c* value);

  static inline ::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c* getStaticF___9();

  static inline void setStaticF___9__2_0(::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* value);

  static inline ::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* getStaticF___9__2_0();

  static inline void setStaticF___9__4_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, int32_t>* value);

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, int32_t>* getStaticF___9__4_1();

  static inline void setStaticF___9__8_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__8_0();

  static inline void setStaticF___9__8_1(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__8_1();

  static inline void setStaticF___9__9_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__9_0();

  static inline void setStaticF___9__11_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__11_0();

  static inline ::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c* New_ctor();

  /// @brief Method .ctor addr 0x2bc67c4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetUVs>b__2_0 addr 0x2bc67cc size 0x4 virtual false final false
  inline ::UnityEngine::Vector2 _GetUVs_b__2_0(::UnityEngine::Vector4 x);

  /// @brief Method <SewUVs>b__4_1 addr 0x2bc67d0 size 0x3c virtual false final false
  inline int32_t _SewUVs_b__4_1(::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t> y);

  /// @brief Method <ProjectFacesAuto>b__8_0 addr 0x2bc680c size 0x18 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _ProjectFacesAuto_b__8_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method <ProjectFacesAuto>b__8_1 addr 0x2bc6824 size 0x18 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _ProjectFacesAuto_b__8_1(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method <ProjectFacesBox>b__9_0 addr 0x2bc683c size 0x18 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _ProjectFacesBox_b__9_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method <ProjectFacesBox>b__11_0 addr 0x2bc6854 size 0x18 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _ProjectFacesBox_b__11_0(::UnityEngine::ProBuilder::Face* x);

  // Ctor Parameters [CppParam { name: "", ty: "__UVEditing____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UVEditing____c(__UVEditing____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UVEditing____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UVEditing____c(__UVEditing____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UVEditing____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12288))
// CS Name: ::UVEditing::<>c__DisplayClass4_0*
class CORDL_TYPE __UVEditing____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field b, offset 0x10, size 0x4
  __declspec(property(get = __get_b, put = __set_b)) int32_t b;

  constexpr int32_t& __get_b();

  constexpr int32_t const& __get_b() const;

  constexpr void __set_b(int32_t value);

  static inline ::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c__DisplayClass4_0* New_ctor();

  /// @brief Method .ctor addr 0x2bc4f68 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <SewUVs>b__0 addr 0x2bc686c size 0x48 virtual false final false
  inline bool _SewUVs_b__0(::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t> x);

  // Ctor Parameters [CppParam { name: "", ty: "__UVEditing____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UVEditing____c__DisplayClass4_0(__UVEditing____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UVEditing____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UVEditing____c__DisplayClass4_0(__UVEditing____c__DisplayClass4_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UVEditing____c__DisplayClass4_0();

public:
  /// @brief Field b, offset: 0x10, size: 0x4, def value: None
  int32_t ___b;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::UVEditing
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12289))
// CS Name: ::UnityEngine.ProBuilder.MeshOperations::UVEditing*
class CORDL_TYPE UVEditing : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass4_0 = ::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c__DisplayClass4_0;

  using __c = ::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c;

  using __c__DisplayClass0_0 = ::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c__DisplayClass0_0;

  /// @brief Method AutoStitch addr 0x2bc3388 size 0x2c4 virtual false final false
  static inline bool AutoStitch(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* f1, ::UnityEngine::ProBuilder::Face* f2, int32_t channel);

  /// @brief Method AlignEdges addr 0x2bc3654 size 0xa58 virtual false final false
  static inline bool AlignEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* faceToMove, ::UnityEngine::ProBuilder::Edge edgeToAlignTo,
                                ::UnityEngine::ProBuilder::Edge edgeToBeAligned, int32_t channel);

  /// @brief Method GetUVs addr 0x2bc40ac size 0x248 virtual false final false
  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> GetUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t channel);

  /// @brief Method ApplyUVs addr 0x2bc4688 size 0x35c virtual false final false
  static inline void ApplyUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs, int32_t channel, bool applyToMesh);

  /// @brief Method SewUVs addr 0x2bc49e4 size 0x584 virtual false final false
  static inline void SewUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int32_t, ::Array<int32_t>*> indexes, float_t delta);

  /// @brief Method CollapseUVs addr 0x2bc4f70 size 0xc8 virtual false final false
  static inline void CollapseUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int32_t, ::Array<int32_t>*> indexes);

  /// @brief Method SplitUVs addr 0x2bc42f4 size 0x394 virtual false final false
  static inline void SplitUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes);

  /// @brief Method SplitUVs addr 0x2bc5038 size 0x414 virtual false final false
  static inline void SplitUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method ProjectFacesAuto addr 0x2bc544c size 0x3a8 virtual false final false
  static inline void ProjectFacesAuto(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> faces, int32_t channel);

  /// @brief Method ProjectFacesBox addr 0x2bc57f4 size 0x5ec virtual false final false
  static inline void ProjectFacesBox(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> faces, int32_t channel);

  /// @brief Method FindMinimalUV addr 0x2bc5de0 size 0xe8 virtual false final false
  static inline ::UnityEngine::Vector2 FindMinimalUV(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs, ::ArrayW<int32_t, ::Array<int32_t>*> indices, float_t xMin, float_t yMin);

  /// @brief Method ProjectFacesBox addr 0x2bc5ec8 size 0x610 virtual false final false
  static inline void ProjectFacesBox(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> faces,
                                     ::UnityEngine::Vector2 lowerLeftAnchor, int32_t channel);

  /// @brief Method ProjectFacesSphere addr 0x2bc64d8 size 0x178 virtual false final false
  static inline void ProjectFacesSphere(::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::ArrayW<int32_t, ::Array<int32_t>*> indexes, int32_t channel);

  /// @brief Method FitUVs addr 0x2bc6650 size 0xcc virtual false final false
  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> FitUVs(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs);

  // Ctor Parameters [CppParam { name: "", ty: "UVEditing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UVEditing(UVEditing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UVEditing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UVEditing(UVEditing const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UVEditing();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::UVEditing, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::UVEditing);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::UVEditing*, "UnityEngine.ProBuilder.MeshOperations", "UVEditing");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c*, "UnityEngine.ProBuilder.MeshOperations", "UVEditing/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c__DisplayClass0_0*, "UnityEngine.ProBuilder.MeshOperations", "UVEditing/<>c__DisplayClass0_0");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__UVEditing____c__DisplayClass4_0*, "UnityEngine.ProBuilder.MeshOperations", "UVEditing/<>c__DisplayClass4_0");
