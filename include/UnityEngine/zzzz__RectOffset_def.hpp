#pragma once
// IWYU pragma private; include "UnityEngine/RectOffset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RectOffset)
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class RectOffset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::RectOffset);
// Type: UnityEngine::RectOffset
// SizeInfo { instance_size: 32, native_size: 16, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::RectOffset*
class CORDL_TYPE RectOffset : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_bottom, put = set_bottom)) int32_t bottom;

  __declspec(property(get = get_horizontal)) int32_t horizontal;

  __declspec(property(get = get_left, put = set_left)) int32_t left;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field m_SourceStyle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SourceStyle, put = __cordl_internal_set_m_SourceStyle)) ::System::Object* m_SourceStyle;

  __declspec(property(get = get_right, put = set_right)) int32_t right;

  __declspec(property(get = get_top, put = set_top)) int32_t top;

  __declspec(property(get = get_vertical)) int32_t vertical;

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*() noexcept;

  /// @brief Method Destroy, addr 0x480f350, size 0x5c, virtual false, abstract: false, final false
  inline void Destroy();

  /// @brief Method Finalize, addr 0x480f2b0, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method InternalCreate, addr 0x480f25c, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr InternalCreate();

  /// @brief Method InternalDestroy, addr 0x480f968, size 0x3c, virtual false, abstract: false, final false
  static inline void InternalDestroy(::System::IntPtr ptr);

  static inline ::UnityEngine::RectOffset* New_ctor();

  static inline ::UnityEngine::RectOffset* New_ctor(int32_t left, int32_t right, int32_t top, int32_t bottom);

  static inline ::UnityEngine::RectOffset* New_ctor(::System::Object* sourceStyle, ::System::IntPtr source);

  /// @brief Method ToString, addr 0x480f5d0, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x480f5e0, size 0x298, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr ::System::Object*& __cordl_internal_get_m_SourceStyle();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_m_SourceStyle() const;

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_SourceStyle(::System::Object* value);

  /// @brief Method .ctor, addr 0x480f214, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x480f3ac, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(int32_t left, int32_t right, int32_t top, int32_t bottom);

  /// @brief Method .ctor, addr 0x480f284, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* sourceStyle, ::System::IntPtr source);

  /// @brief Method get_bottom, addr 0x480f92c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_bottom();

  /// @brief Method get_horizontal, addr 0x480f9a4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_horizontal();

  /// @brief Method get_left, addr 0x480f878, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_left();

  /// @brief Method get_right, addr 0x480f8b4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_right();

  /// @brief Method get_top, addr 0x480f8f0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_top();

  /// @brief Method get_vertical, addr 0x480f9e0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_vertical();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable() noexcept;

  /// @brief Method set_bottom, addr 0x480f58c, size 0x44, virtual false, abstract: false, final false
  inline void set_bottom(int32_t value);

  /// @brief Method set_left, addr 0x480f4c0, size 0x44, virtual false, abstract: false, final false
  inline void set_left(int32_t value);

  /// @brief Method set_right, addr 0x480f504, size 0x44, virtual false, abstract: false, final false
  inline void set_right(int32_t value);

  /// @brief Method set_top, addr 0x480f548, size 0x44, virtual false, abstract: false, final false
  inline void set_top(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectOffset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectOffset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectOffset(RectOffset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectOffset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectOffset(RectOffset const&) = delete;

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_SourceStyle, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___m_SourceStyle;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10671 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RectOffset, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::RectOffset, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RectOffset, ___m_SourceStyle) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::RectOffset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RectOffset*, "UnityEngine", "RectOffset");
