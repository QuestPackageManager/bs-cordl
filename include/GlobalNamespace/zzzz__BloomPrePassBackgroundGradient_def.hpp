#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundGradient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundTextureGradient_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundGradient)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class Gradient;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundGradient;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundGradient);
// Dependencies BloomPrePassBackgroundTextureGradient
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassBackgroundGradient
class CORDL_TYPE BloomPrePassBackgroundGradient : public ::GlobalNamespace::BloomPrePassBackgroundTextureGradient {
public:
  // Declarations
  /// @brief Field _gradient, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__gradient, put = __cordl_internal_set__gradient)) ::UnityEngine::Gradient* _gradient;

  static inline ::GlobalNamespace::BloomPrePassBackgroundGradient* New_ctor();

  /// @brief Method UpdatePixels, addr 0x39d1924, size 0x74, virtual true, abstract: false, final false
  inline void UpdatePixels(::Unity::Collections::NativeArray_1<::UnityEngine::Color32> pixels, int32_t numberOfPixels);

  constexpr ::UnityEngine::Gradient* const& __cordl_internal_get__gradient() const;

  constexpr ::UnityEngine::Gradient*& __cordl_internal_get__gradient();

  constexpr void __cordl_internal_set__gradient(::UnityEngine::Gradient* value);

  /// @brief Method .ctor, addr 0x39d1998, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundGradient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundGradient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundGradient(BloomPrePassBackgroundGradient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundGradient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundGradient(BloomPrePassBackgroundGradient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16244 };

  /// @brief Field _gradient, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Gradient* ____gradient;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundGradient, ____gradient) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundGradient, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundGradient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundGradient*, "", "BloomPrePassBackgroundGradient");
