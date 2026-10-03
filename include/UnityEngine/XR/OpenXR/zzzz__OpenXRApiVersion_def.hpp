#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRApiVersion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRApiVersion)
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class OpenXRApiVersion;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::OpenXRApiVersion*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::OpenXRApiVersion*, "UnityEngine.XR.OpenXR", "OpenXRApiVersion");
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRApiVersion
class CORDL_TYPE OpenXRApiVersion : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Major)) uint16_t Major;

  __declspec(property(get = get_Minor)) uint16_t Minor;

  __declspec(property(get = get_Patch)) uint32_t Patch;

  /// @brief Field m_major, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get_m_major, put = __cordl_internal_set_m_major)) uint16_t m_major;

  /// @brief Field m_minor, offset 0x12, size 0x2
  __declspec(property(get = __cordl_internal_get_m_minor, put = __cordl_internal_set_m_minor)) uint16_t m_minor;

  /// @brief Field m_patch, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_patch, put = __cordl_internal_set_m_patch)) uint32_t m_patch;

  /// @brief Convert operator to "::System::IComparable_1<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>"
  constexpr operator ::System::IComparable_1<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>*() noexcept;

  /// @brief Method CompareTo, addr 0x6e303a4, size 0xb0, virtual true, abstract: false, final true
  inline int32_t CompareTo(::UnityEngine::XR::OpenXR::OpenXRApiVersion* other);

  /// @brief Method Equals, addr 0x6e30004, size 0xc0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6e30454, size 0x54, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::OpenXR::OpenXRApiVersion* other);

  /// @brief Method GetHashCode, addr 0x6e300c4, size 0x88, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::XR::OpenXR::OpenXRApiVersion* New_ctor(uint16_t major, uint16_t minor, uint32_t patch);

  /// @brief Method ToString, addr 0x6e302c8, size 0xdc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x6e3014c, size 0x17c, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW customRuntimeLoaderVersion, ::by_ref<::UnityEngine::XR::OpenXR::OpenXRApiVersion*> version);

  constexpr uint16_t const& __cordl_internal_get_m_major() const;

  constexpr uint16_t& __cordl_internal_get_m_major();

  constexpr uint16_t const& __cordl_internal_get_m_minor() const;

  constexpr uint16_t& __cordl_internal_get_m_minor();

  constexpr uint32_t const& __cordl_internal_get_m_patch() const;

  constexpr uint32_t& __cordl_internal_get_m_patch();

  constexpr void __cordl_internal_set_m_major(uint16_t value);

  constexpr void __cordl_internal_set_m_minor(uint16_t value);

  constexpr void __cordl_internal_set_m_patch(uint32_t value);

  /// @brief Method .ctor, addr 0x6e2fd24, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint16_t major, uint16_t minor, uint32_t patch);

  /// @brief Method get_Current, addr 0x6e2fccc, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::OpenXRApiVersion* get_Current();

  /// @brief Method get_Major, addr 0x6e2fd34, size 0x8, virtual false, abstract: false, final false
  inline uint16_t get_Major();

  /// @brief Method get_Minor, addr 0x6e2fd3c, size 0x8, virtual false, abstract: false, final false
  inline uint16_t get_Minor();

  /// @brief Method get_Patch, addr 0x6e2fd44, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Patch();

  /// @brief Convert to "::System::IComparable_1<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>"
  constexpr ::System::IComparable_1<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>* i___System__IComparable_1___UnityEngine__XR__OpenXR__OpenXRApiVersion__() noexcept;

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>* i___System__IEquatable_1___UnityEngine__XR__OpenXR__OpenXRApiVersion__() noexcept;

  /// @brief Method op_Equality, addr 0x6e2fd4c, size 0x54, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::XR::OpenXR::OpenXRApiVersion* lhs, ::UnityEngine::XR::OpenXR::OpenXRApiVersion* rhs);

  /// @brief Method op_GreaterThan, addr 0x6e2fdf4, size 0x8c, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::UnityEngine::XR::OpenXR::OpenXRApiVersion* lhs, ::UnityEngine::XR::OpenXR::OpenXRApiVersion* rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6e2ff0c, size 0x7c, virtual false, abstract: false, final false
  static inline bool op_GreaterThanOrEqual(::UnityEngine::XR::OpenXR::OpenXRApiVersion* lhs, ::UnityEngine::XR::OpenXR::OpenXRApiVersion* rhs);

  /// @brief Method op_Inequality, addr 0x6e2fda0, size 0x54, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::XR::OpenXR::OpenXRApiVersion* lhs, ::UnityEngine::XR::OpenXR::OpenXRApiVersion* rhs);

  /// @brief Method op_LessThan, addr 0x6e2fe80, size 0x8c, virtual false, abstract: false, final false
  static inline bool op_LessThan(::UnityEngine::XR::OpenXR::OpenXRApiVersion* lhs, ::UnityEngine::XR::OpenXR::OpenXRApiVersion* rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6e2ff88, size 0x7c, virtual false, abstract: false, final false
  static inline bool op_LessThanOrEqual(::UnityEngine::XR::OpenXR::OpenXRApiVersion* lhs, ::UnityEngine::XR::OpenXR::OpenXRApiVersion* rhs);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRApiVersion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRApiVersion", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRApiVersion(OpenXRApiVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRApiVersion", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRApiVersion(OpenXRApiVersion const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17470 };

  /// [SerializeField]
  /// @brief Field m_major, offset: 0x10, size: 0x2, def value: None
  uint16_t ___m_major;

  /// [SerializeField]
  /// @brief Field m_minor, offset: 0x12, size: 0x2, def value: None
  uint16_t ___m_minor;

  /// [SerializeField]
  /// @brief Field m_patch, offset: 0x14, size: 0x4, def value: None
  uint32_t ___m_patch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRApiVersion, ___m_major) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRApiVersion, ___m_minor) == 0x12, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRApiVersion, ___m_patch) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::OpenXRApiVersion) == 0x18, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
