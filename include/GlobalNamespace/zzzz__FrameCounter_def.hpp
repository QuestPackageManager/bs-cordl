#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FrameCounter)
// Forward declare root types
namespace GlobalNamespace {
class FrameCounter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FrameCounter);
// Type: ::FrameCounter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13865))
// CS Name: ::FrameCounter*
class CORDL_TYPE FrameCounter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _numberOfFrames, offset 0x18, size 0x4
  __declspec(property(get = __get__numberOfFrames, put = __set__numberOfFrames)) int32_t _numberOfFrames;

  constexpr int32_t& __get__numberOfFrames();

  constexpr int32_t const& __get__numberOfFrames() const;

  constexpr void __set__numberOfFrames(int32_t value);

  /// @brief Method Update addr 0x1f96960 size 0x10 virtual false final false
  inline void Update();

  /// @brief Method OnDestroy addr 0x1f96970 size 0x9c virtual false final false
  inline void OnDestroy();

  static inline ::GlobalNamespace::FrameCounter* New_ctor();

  /// @brief Method .ctor addr 0x1f96a0c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FrameCounter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FrameCounter(FrameCounter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FrameCounter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FrameCounter(FrameCounter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FrameCounter();

public:
  /// @brief Field _numberOfFrames, offset: 0x18, size: 0x4, def value: None
  int32_t ____numberOfFrames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FrameCounter, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FrameCounter, ____numberOfFrames) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FrameCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FrameCounter*, "", "FrameCounter");
