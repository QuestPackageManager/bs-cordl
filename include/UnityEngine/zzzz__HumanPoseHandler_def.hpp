#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HumanPoseHandler)
namespace System {
class IDisposable;
}
namespace UnityEngine {
class Avatar;
}
namespace UnityEngine {
struct HumanPose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class HumanPoseHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::HumanPoseHandler);
// Type: UnityEngine::HumanPoseHandler
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14885))
// CS Name: ::UnityEngine::HumanPoseHandler*
class CORDL_TYPE HumanPoseHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Ptr, put = __set_m_Ptr)) void* m_Ptr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr void*& __get_m_Ptr();

  constexpr void* const& __get_m_Ptr() const;

  constexpr void __set_m_Ptr(void* value);

  /// @brief Method Internal_CreateFromRoot, addr 0x2c96470, size 0x44, virtual false, abstract: false, final false
  static inline void* Internal_CreateFromRoot(::UnityEngine::Avatar* avatar, ::UnityEngine::Transform* root);

  /// @brief Method Internal_Destroy, addr 0x2c964b4, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(void* ptr);

  /// @brief Method GetHumanPose, addr 0x2c964f0, size 0x5c, virtual false, abstract: false, final false
  inline void GetHumanPose(ByRef<::UnityEngine::Vector3> bodyPosition, ByRef<::UnityEngine::Quaternion> bodyRotation, ByRef<::ArrayW<float_t, ::Array<float_t>*>> muscles);

  /// @brief Method Dispose, addr 0x2c9654c, size 0xcc, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::UnityEngine::HumanPoseHandler* New_ctor(::UnityEngine::Avatar* avatar, ::UnityEngine::Transform* root);

  /// @brief Method .ctor, addr 0x2c96618, size 0x22c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Avatar* avatar, ::UnityEngine::Transform* root);

  /// @brief Method GetHumanPose, addr 0x2c96844, size 0xf4, virtual false, abstract: false, final false
  inline void GetHumanPose(ByRef<::UnityEngine::HumanPose> humanPose);

  // Ctor Parameters [CppParam { name: "", ty: "HumanPoseHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HumanPoseHandler(HumanPoseHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HumanPoseHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HumanPoseHandler(HumanPoseHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HumanPoseHandler();

public:
  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HumanPoseHandler, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::HumanPoseHandler, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::HumanPoseHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HumanPoseHandler*, "UnityEngine", "HumanPoseHandler");
