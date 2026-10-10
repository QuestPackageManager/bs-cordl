#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/ResourceHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourceType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceHandle)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphResourceType;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct ResourceHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle, "UnityEngine.Rendering.RenderGraphModule", "ResourceHandle");
// [IsReadOnly]
// Dependencies UnityEngine.Rendering.RenderGraphModule.RenderGraphResourceType
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.ResourceHandle
struct CORDL_TYPE ResourceHandle {
public:
  // Declarations
  __declspec(property(get = get_IsVersioned)) bool IsVersioned;

  __declspec(property(get = get_iType)) int32_t iType;

  __declspec(property(get = get_index)) int32_t index;

  /// @brief Field s_CurrentValidBit, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CurrentValidBit, put = setStaticF_s_CurrentValidBit)) uint32_t s_CurrentValidBit;

  /// @brief Field s_SharedResourceValidBit, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_SharedResourceValidBit, put = setStaticF_s_SharedResourceValidBit)) uint32_t s_SharedResourceValidBit;

  __declspec(property(get = get_type)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*();

  /// @brief Method Equals, addr 0x6c150c8, size 0x94, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle hdl);

  /// @brief Method Equals, addr 0x6c152dc, size 0xe8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x6c13de8, size 0x70, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsNull, addr 0x6c15058, size 0x60, virtual false, abstract: false, final false
  inline bool IsNull();

  /// @brief Method IsValid, addr 0x6c14fb4, size 0xa4, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method NewFrame, addr 0x6c0ea68, size 0xc4, virtual false, abstract: false, final false
  static inline void NewFrame(int32_t executionIndex);

  /// @brief Method .ctor, addr 0x6c0f138, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> h, int32_t version);

  /// @brief Method .ctor, addr 0x6c0caa8, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(int32_t value, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type, bool shared);

  static inline uint32_t getStaticF_s_CurrentValidBit();

  static inline uint32_t getStaticF_s_SharedResourceValidBit();

  /// @brief Method get_IsVersioned, addr 0x6c150b8, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsVersioned();

  /// @brief Method get_iType, addr 0x6c14f4c, size 0x58, virtual false, abstract: false, final false
  inline int32_t get_iType();

  /// @brief Method get_index, addr 0x6c14f44, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_type, addr 0x6c14fac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType get_type();

  /// @brief Method get_version, addr 0x6c14fa4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_version();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>* i___System__IEquatable_1___UnityEngine__Rendering__RenderGraphModule__ResourceHandle_();

  /// @brief Method op_Equality, addr 0x6c1515c, size 0xc0, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle lhs, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle rhs);

  /// @brief Method op_Inequality, addr 0x6c1521c, size 0xc0, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle lhs, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle rhs);

  static inline void setStaticF_s_CurrentValidBit(uint32_t value);

  static inline void setStaticF_s_SharedResourceValidBit(uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceHandle();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "m_Type", ty: "::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType", modifiers: "", def_value: None, comment: None }]
  constexpr ResourceHandle(uint32_t m_Value, int32_t m_Version, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType m_Type) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9381 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field kIndexMask offset 0xffffffff size 0x4
  static constexpr uint32_t kIndexMask{ static_cast<uint32_t>(0xffffu) };

  /// @brief Field kValidityMask offset 0xffffffff size 0x4
  static constexpr uint32_t kValidityMask{ static_cast<uint32_t>(0xffff0000u) };

  /// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
  uint32_t m_Value;

  /// @brief Field m_Version, offset: 0x4, size: 0x4, def value: None
  int32_t m_Version;

  /// @brief Field m_Type, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType m_Type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle, m_Version) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle, m_Type) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle) == 0xc, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
