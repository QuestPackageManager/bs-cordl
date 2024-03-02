#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProviderLoadRequestOptions)
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ProviderLoadRequestOptions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions);
// Type: UnityEngine.ResourceManagement.ResourceProviders::ProviderLoadRequestOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::ProviderLoadRequestOptions*
class CORDL_TYPE ProviderLoadRequestOptions : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IgnoreFailures, put = set_IgnoreFailures)) bool IgnoreFailures;

  __declspec(property(get = get_WebRequestTimeout, put = set_WebRequestTimeout)) int32_t WebRequestTimeout;

  /// @brief Field m_IgnoreFailures, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IgnoreFailures, put = __cordl_internal_set_m_IgnoreFailures)) bool m_IgnoreFailures;

  /// @brief Field m_WebRequestTimeout, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_WebRequestTimeout, put = __cordl_internal_set_m_WebRequestTimeout)) int32_t m_WebRequestTimeout;

  /// @brief Method Copy, addr 0x2cbeffc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions* Copy();

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions* New_ctor();

  constexpr bool const& __cordl_internal_get_m_IgnoreFailures() const;

  constexpr bool& __cordl_internal_get_m_IgnoreFailures();

  constexpr int32_t const& __cordl_internal_get_m_WebRequestTimeout() const;

  constexpr int32_t& __cordl_internal_get_m_WebRequestTimeout();

  constexpr void __cordl_internal_set_m_IgnoreFailures(bool value);

  constexpr void __cordl_internal_set_m_WebRequestTimeout(int32_t value);

  /// @brief Method .ctor, addr 0x2cbf0a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IgnoreFailures, addr 0x2cbf07c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IgnoreFailures();

  /// @brief Method get_WebRequestTimeout, addr 0x2cbf090, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_WebRequestTimeout();

  /// @brief Method set_IgnoreFailures, addr 0x2cbf084, size 0xc, virtual false, abstract: false, final false
  inline void set_IgnoreFailures(bool value);

  /// @brief Method set_WebRequestTimeout, addr 0x2cbf098, size 0x8, virtual false, abstract: false, final false
  inline void set_WebRequestTimeout(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProviderLoadRequestOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProviderLoadRequestOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProviderLoadRequestOptions(ProviderLoadRequestOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProviderLoadRequestOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProviderLoadRequestOptions(ProviderLoadRequestOptions const&) = delete;

  /// @brief Field m_IgnoreFailures, offset: 0x10, size: 0x1, def value: None
  bool ___m_IgnoreFailures;

  /// @brief Field m_WebRequestTimeout, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_WebRequestTimeout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions, ___m_IgnoreFailures) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions, ___m_WebRequestTimeout) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*, "UnityEngine.ResourceManagement.ResourceProviders", "ProviderLoadRequestOptions");
