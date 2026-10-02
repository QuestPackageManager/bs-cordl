#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/SID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SID)
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
class SID;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::SID*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::SID*, "UnityEngine.Rendering.UnifiedRayTracing", "SID");
// Dependencies System.Object
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.SID
class CORDL_TYPE SID : public ::System::Object {
public:
  // Declarations
  /// @brief Field _UnifiedRT_DispatchDims, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__UnifiedRT_DispatchDims, put = setStaticF__UnifiedRT_DispatchDims)) int32_t _UnifiedRT_DispatchDims;

  /// @brief Field _UnifiedRT_DispatchDimsInWorkgroups, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__UnifiedRT_DispatchDimsInWorkgroups, put = setStaticF__UnifiedRT_DispatchDimsInWorkgroups)) int32_t _UnifiedRT_DispatchDimsInWorkgroups;

  /// @brief Field _UnifiedRT_Stack, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__UnifiedRT_Stack, put = setStaticF__UnifiedRT_Stack)) int32_t _UnifiedRT_Stack;

  static inline int32_t getStaticF__UnifiedRT_DispatchDims();

  static inline int32_t getStaticF__UnifiedRT_DispatchDimsInWorkgroups();

  static inline int32_t getStaticF__UnifiedRT_Stack();

  static inline void setStaticF__UnifiedRT_DispatchDims(int32_t value);

  static inline void setStaticF__UnifiedRT_DispatchDimsInWorkgroups(int32_t value);

  static inline void setStaticF__UnifiedRT_Stack(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SID", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SID(SID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SID", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SID(SID const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20504 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::SID) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
