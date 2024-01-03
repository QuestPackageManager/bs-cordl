#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Smoothing)
namespace UnityEngine::ProBuilder {
class __Smoothing____c;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Smoothing;
}
namespace UnityEngine::ProBuilder {
class __Smoothing____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Smoothing);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__Smoothing____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12203))
// CS Name: ::Smoothing::<>c*
class CORDL_TYPE __Smoothing____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::ProBuilder::__Smoothing____c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0))::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* __9__5_0;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0))::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* __9__9_0;

  static inline void setStaticF___9(::UnityEngine::ProBuilder::__Smoothing____c* value);

  static inline ::UnityEngine::ProBuilder::__Smoothing____c* getStaticF___9();

  static inline void setStaticF___9__5_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* getStaticF___9__5_0();

  static inline void setStaticF___9__9_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* getStaticF___9__9_0();

  static inline ::UnityEngine::ProBuilder::__Smoothing____c* New_ctor();

  /// @brief Method .ctor, addr 0x2b79754, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetUnusedSmoothingGroup>b__5_0, addr 0x2b7975c, size 0x18, virtual false, abstract: false, final false
  inline int32_t _GetUnusedSmoothingGroup_b__5_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method <ApplySmoothingGroups>b__9_0, addr 0x2b79774, size 0x18, virtual false, abstract: false, final false
  inline int32_t _ApplySmoothingGroups_b__9_0(::UnityEngine::ProBuilder::Face* x);

  // Ctor Parameters [CppParam { name: "", ty: "__Smoothing____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Smoothing____c(__Smoothing____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Smoothing____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Smoothing____c(__Smoothing____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Smoothing____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__Smoothing____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::Smoothing
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12204))
// CS Name: ::UnityEngine.ProBuilder::Smoothing*
class CORDL_TYPE Smoothing : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::__Smoothing____c;

  /// @brief Method GetUnusedSmoothingGroup, addr 0x2b78534, size 0x1dc, virtual false, abstract: false, final false
  static inline int32_t GetUnusedSmoothingGroup(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Method GetNextUnusedSmoothingGroup, addr 0x2b78710, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t GetNextUnusedSmoothingGroup(int32_t start, ::System::Collections::Generic::HashSet_1<int32_t>* used);

  /// @brief Method IsSmooth, addr 0x2b787b8, size 0x20, virtual false, abstract: false, final false
  static inline bool IsSmooth(int32_t index);

  /// @brief Method ApplySmoothingGroups, addr 0x2b787d8, size 0x8, virtual false, abstract: false, final false
  static inline void ApplySmoothingGroups(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces,
                                          float_t angleThreshold);

  /// @brief Method ApplySmoothingGroups, addr 0x2b787e0, size 0x81c, virtual false, abstract: false, final false
  static inline void ApplySmoothingGroups(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces,
                                          float_t angleThreshold, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals);

  /// @brief Method FindSoftEdgesRecursive, addr 0x2b78ffc, size 0x2d0, virtual false, abstract: false, final false
  static inline bool FindSoftEdgesRecursive(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals, ::UnityEngine::ProBuilder::WingedEdge* wing, float_t angleThreshold,
                                            ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* processed);

  /// @brief Method IsSoftEdge, addr 0x2b792cc, size 0x424, virtual false, abstract: false, final false
  static inline bool IsSoftEdge(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals, ::UnityEngine::ProBuilder::EdgeLookup left, ::UnityEngine::ProBuilder::EdgeLookup right,
                                float_t threshold);

  // Ctor Parameters [CppParam { name: "", ty: "Smoothing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Smoothing(Smoothing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Smoothing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Smoothing(Smoothing const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Smoothing();

public:
  /// @brief Field smoothingGroupNone offset 0xffffffff size 0x4
  static constexpr int32_t smoothingGroupNone{ static_cast<int32_t>(0x0) };

  /// @brief Field smoothRangeMin offset 0xffffffff size 0x4
  static constexpr int32_t smoothRangeMin{ static_cast<int32_t>(0x1) };

  /// @brief Field smoothRangeMax offset 0xffffffff size 0x4
  static constexpr int32_t smoothRangeMax{ static_cast<int32_t>(0x18) };

  /// @brief Field hardRangeMin offset 0xffffffff size 0x4
  static constexpr int32_t hardRangeMin{ static_cast<int32_t>(0x19) };

  /// @brief Field hardRangeMax offset 0xffffffff size 0x4
  static constexpr int32_t hardRangeMax{ static_cast<int32_t>(0x2a) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Smoothing, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Smoothing);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Smoothing*, "UnityEngine.ProBuilder", "Smoothing");
NEED_NO_BOX(::UnityEngine::ProBuilder::__Smoothing____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__Smoothing____c*, "UnityEngine.ProBuilder", "Smoothing/<>c");
