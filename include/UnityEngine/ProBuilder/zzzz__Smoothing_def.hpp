#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Smoothing.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Smoothing)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class Smoothing___c;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Smoothing;
}
namespace UnityEngine::ProBuilder {
class Smoothing___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Smoothing);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Smoothing___c);
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Smoothing/<>c
class CORDL_TYPE Smoothing___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::Smoothing___c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* __9__5_0;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0)) ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* __9__9_0;

  static inline ::UnityEngine::ProBuilder::Smoothing___c* New_ctor();

  /// @brief Method <ApplySmoothingGroups>b__9_0, addr 0x473b664, size 0x18, virtual false, abstract: false, final false
  inline int32_t _ApplySmoothingGroups_b__9_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method <GetUnusedSmoothingGroup>b__5_0, addr 0x473b64c, size 0x18, virtual false, abstract: false, final false
  inline int32_t _GetUnusedSmoothingGroup_b__5_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method .ctor, addr 0x473b644, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::Smoothing___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* getStaticF___9__5_0();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* getStaticF___9__9_0();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::Smoothing___c* value);

  static inline void setStaticF___9__5_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value);

  static inline void setStaticF___9__9_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Smoothing___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Smoothing___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Smoothing___c(Smoothing___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Smoothing___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Smoothing___c(Smoothing___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14319 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Smoothing___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Smoothing
class CORDL_TYPE Smoothing : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::Smoothing___c;

  /// @brief Method ApplySmoothingGroups, addr 0x473a694, size 0x8, virtual false, abstract: false, final false
  static inline void ApplySmoothingGroups(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces,
                                          float_t angleThreshold);

  /// @brief Method ApplySmoothingGroups, addr 0x473a69c, size 0x858, virtual false, abstract: false, final false
  static inline void ApplySmoothingGroups(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces,
                                          float_t angleThreshold, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals);

  /// @brief Method FindSoftEdgesRecursive, addr 0x473aef4, size 0x2dc, virtual false, abstract: false, final false
  static inline bool FindSoftEdgesRecursive(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals, ::UnityEngine::ProBuilder::WingedEdge* wing, float_t angleThreshold,
                                            ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* processed);

  /// @brief Method GetNextUnusedSmoothingGroup, addr 0x473a5c4, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t GetNextUnusedSmoothingGroup(int32_t start, ::System::Collections::Generic::HashSet_1<int32_t>* used);

  /// @brief Method GetUnusedSmoothingGroup, addr 0x473a3ec, size 0x1d8, virtual false, abstract: false, final false
  static inline int32_t GetUnusedSmoothingGroup(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Method IsSmooth, addr 0x473a674, size 0x20, virtual false, abstract: false, final false
  static inline bool IsSmooth(int32_t index);

  /// @brief Method IsSoftEdge, addr 0x473b1d0, size 0x418, virtual false, abstract: false, final false
  static inline bool IsSoftEdge(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals, ::UnityEngine::ProBuilder::EdgeLookup left, ::UnityEngine::ProBuilder::EdgeLookup right,
                                float_t threshold);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Smoothing();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Smoothing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Smoothing(Smoothing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Smoothing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Smoothing(Smoothing const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14320 };

  /// @brief Field hardRangeMax offset 0xffffffff size 0x4
  static constexpr int32_t hardRangeMax{ static_cast<int32_t>(0x2a) };

  /// @brief Field hardRangeMin offset 0xffffffff size 0x4
  static constexpr int32_t hardRangeMin{ static_cast<int32_t>(0x19) };

  /// @brief Field smoothRangeMax offset 0xffffffff size 0x4
  static constexpr int32_t smoothRangeMax{ static_cast<int32_t>(0x18) };

  /// @brief Field smoothRangeMin offset 0xffffffff size 0x4
  static constexpr int32_t smoothRangeMin{ static_cast<int32_t>(0x1) };

  /// @brief Field smoothingGroupNone offset 0xffffffff size 0x4
  static constexpr int32_t smoothingGroupNone{ static_cast<int32_t>(0x0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Smoothing, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Smoothing);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Smoothing*, "UnityEngine.ProBuilder", "Smoothing");
NEED_NO_BOX(::UnityEngine::ProBuilder::Smoothing___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Smoothing___c*, "UnityEngine.ProBuilder", "Smoothing/<>c");
