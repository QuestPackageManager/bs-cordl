#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsLayers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsLayers)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsLayers_LayerNames;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsLayers_LayerNames;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsLayers;
}
// Write type traits
MARK_REF_T(::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames*);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsLayers);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames*, "UnityEngine.LowLevelPhysics2D", "PhysicsLayers/LayerNames");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsLayers, "UnityEngine.LowLevelPhysics2D", "PhysicsLayers");
// Dependencies System.Object
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: false
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsLayers/LayerNames
class CORDL_TYPE PhysicsLayers_LayerNames : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_NameMap)) ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* NameMap;

  __declspec(property(get = get_Names)) ::ArrayW<::StringW> Names;

  /// @brief Field m_NameMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NameMap, put = __cordl_internal_set_m_NameMap)) ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* m_NameMap;

  /// @brief Field m_Names, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Names, put = __cordl_internal_set_m_Names)) ::ArrayW<::StringW> m_Names;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x6fd43c0, size 0xe4, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x6fd43bc, size 0x4, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* const& __cordl_internal_get_m_NameMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __cordl_internal_get_m_NameMap();

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get_m_Names() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get_m_Names();

  constexpr void __cordl_internal_set_m_NameMap(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr void __cordl_internal_set_m_Names(::ArrayW<::StringW> value);

  /// @brief Method .ctor, addr 0x6fd44a4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DefaultLayerNames, addr 0x6fd1cbc, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames* get_DefaultLayerNames();

  /// @brief Method get_NameMap, addr 0x6fd4328, size 0x94, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* get_NameMap();

  /// @brief Method get_Names, addr 0x6fd42c0, size 0x68, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> get_Names();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsLayers_LayerNames();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhysicsLayers_LayerNames", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicsLayers_LayerNames(PhysicsLayers_LayerNames&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsLayers_LayerNames", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsLayers_LayerNames(PhysicsLayers_LayerNames const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21518 };

  /// [SerializeField]
  /// @brief Field m_Names, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW> ___m_Names;

  /// @brief Field m_NameMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ___m_NameMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames, ___m_Names) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames, ___m_NameMap) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames) == 0x20, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsLayers
#pragma pack(push, 0)
struct CORDL_TYPE PhysicsLayers {
public:
  // Declarations
  using LayerNames = ::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsLayers();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21519 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsLayers) == 0x1, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
