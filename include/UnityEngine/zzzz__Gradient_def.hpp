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
CORDL_MODULE_EXPORT(Gradient)
namespace UnityEngine {
struct GradientMode;
}
namespace UnityEngine {
struct GradientColorKey;
}
namespace UnityEngine {
struct Color;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct GradientAlphaKey;
}
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine {
class Gradient;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Gradient);
// Type: UnityEngine::Gradient
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10257))
// CS Name: ::UnityEngine::Gradient*
class CORDL_TYPE Gradient : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Ptr, put = __set_m_Ptr)) void* m_Ptr;

  __declspec(property(get = get_colorKeys, put = set_colorKeys))::ArrayW<::UnityEngine::GradientColorKey, ::Array<::UnityEngine::GradientColorKey>*> colorKeys;

  __declspec(property(get = get_alphaKeys, put = set_alphaKeys))::ArrayW<::UnityEngine::GradientAlphaKey, ::Array<::UnityEngine::GradientAlphaKey>*> alphaKeys;

  __declspec(property(put = set_mode))::UnityEngine::GradientMode mode;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Gradient*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Gradient*>*() noexcept;

  constexpr void*& __get_m_Ptr();

  constexpr void* const& __get_m_Ptr() const;

  constexpr void __set_m_Ptr(void* value);

  /// @brief Method Init, addr 0x2cdd624, size 0x28, virtual false, abstract: false, final false
  static inline void* Init();

  /// @brief Method Cleanup, addr 0x2cdd64c, size 0x3c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Internal_Equals, addr 0x2cdd688, size 0x44, virtual false, abstract: false, final false
  inline bool Internal_Equals(void* other);

  static inline ::UnityEngine::Gradient* New_ctor();

  /// @brief Method .ctor, addr 0x2cdd6cc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Finalize, addr 0x2cdd714, size 0xb8, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Evaluate, addr 0x2cdd7cc, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Color Evaluate(float_t time);

  /// @brief Method get_colorKeys, addr 0x2cdd888, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::GradientColorKey, ::Array<::UnityEngine::GradientColorKey>*> get_colorKeys();

  /// @brief Method set_colorKeys, addr 0x2cdd8c4, size 0x44, virtual false, abstract: false, final false
  inline void set_colorKeys(::ArrayW<::UnityEngine::GradientColorKey, ::Array<::UnityEngine::GradientColorKey>*> value);

  /// @brief Method get_alphaKeys, addr 0x2cdd908, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::GradientAlphaKey, ::Array<::UnityEngine::GradientAlphaKey>*> get_alphaKeys();

  /// @brief Method set_alphaKeys, addr 0x2cdd944, size 0x44, virtual false, abstract: false, final false
  inline void set_alphaKeys(::ArrayW<::UnityEngine::GradientAlphaKey, ::Array<::UnityEngine::GradientAlphaKey>*> value);

  /// @brief Method set_mode, addr 0x2cdd988, size 0x44, virtual false, abstract: false, final false
  inline void set_mode(::UnityEngine::GradientMode value);

  /// @brief Method SetKeys, addr 0x2cdd9cc, size 0x54, virtual false, abstract: false, final false
  inline void SetKeys(::ArrayW<::UnityEngine::GradientColorKey, ::Array<::UnityEngine::GradientColorKey>*> colorKeys,
                      ::ArrayW<::UnityEngine::GradientAlphaKey, ::Array<::UnityEngine::GradientAlphaKey>*> alphaKeys);

  /// @brief Method Equals, addr 0x2cdda20, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x2cddae8, size 0xc8, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Gradient* other);

  /// @brief Method GetHashCode, addr 0x2cddbb0, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Evaluate_Injected, addr 0x2cdd834, size 0x54, virtual false, abstract: false, final false
  inline void Evaluate_Injected(float_t time, ByRef<::UnityEngine::Color> ret);

  // Ctor Parameters [CppParam { name: "", ty: "Gradient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gradient(Gradient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gradient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gradient(Gradient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gradient();

public:
  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Gradient, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Gradient, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Gradient);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Gradient*, "UnityEngine", "Gradient");
