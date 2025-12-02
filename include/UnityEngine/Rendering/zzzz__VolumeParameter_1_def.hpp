#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeParameter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VolumeParameter_1)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
class VolumeParameter;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename T> class VolumeParameter_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::VolumeParameter_1);
// Dependencies UnityEngine.Rendering.VolumeParameter
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeParameter`1<T>
class CORDL_TYPE VolumeParameter_1 : public ::UnityEngine::Rendering::VolumeParameter {
public:
  // Declarations
  /// @brief Field m_Value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) T m_Value;

  __declspec(property(get = get_value, put = set_value)) T value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::VolumeParameter_1<T>*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::VolumeParameter_1<T>*>*() noexcept;

  /// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::VolumeParameter_1<T>* other);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Interp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Interp(::UnityEngine::Rendering::VolumeParameter* from, ::UnityEngine::Rendering::VolumeParameter* to, float_t t);

  /// @brief Method Interp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Interp(T from, T to, float_t t);

  static inline ::UnityEngine::Rendering::VolumeParameter_1<T>* New_ctor();

  static inline ::UnityEngine::Rendering::VolumeParameter_1<T>* New_ctor(T value, bool overrideState);

  /// @brief Method Override, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Override(T x);

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValue(::UnityEngine::Rendering::VolumeParameter* parameter);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr T const& __cordl_internal_get_m_Value() const;

  constexpr T& __cordl_internal_get_m_Value();

  constexpr void __cordl_internal_set_m_Value(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T value, bool overrideState);

  /// @brief Method get_value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::VolumeParameter_1<T>*>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::VolumeParameter_1<T>*>* i___System__IEquatable_1___UnityEngine__Rendering__VolumeParameter_1_T___() noexcept;

  /// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rendering::VolumeParameter_1<T>* lhs, T rhs);

  /// @brief Method op_Explicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T op_Explicit_T(::UnityEngine::Rendering::VolumeParameter_1<T>* prop);

  /// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Rendering::VolumeParameter_1<T>* lhs, T rhs);

  /// @brief Method set_value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_value(T value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeParameter_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeParameter_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeParameter_1(VolumeParameter_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeParameter_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeParameter_1(VolumeParameter_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12302 };

  /// @brief Field m_Value, offset: 0x18, size: 0x8, def value: None
  T ___m_Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::VolumeParameter_1, "UnityEngine.Rendering", "VolumeParameter`1");
