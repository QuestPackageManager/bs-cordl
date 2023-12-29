#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PointerId)
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerId;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerId);
// Type: UnityEngine.UIElements::PointerId
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7281))
// CS Name: ::UnityEngine.UIElements::PointerId*
class CORDL_TYPE PointerId : public ::System::Object {
public:
  // Declarations
  /// @brief Field maxPointers, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_maxPointers, put = setStaticF_maxPointers)) int32_t maxPointers;

  /// @brief Field invalidPointerId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_invalidPointerId, put = setStaticF_invalidPointerId)) int32_t invalidPointerId;

  /// @brief Field mousePointerId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_mousePointerId, put = setStaticF_mousePointerId)) int32_t mousePointerId;

  /// @brief Field touchPointerIdBase, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_touchPointerIdBase, put = setStaticF_touchPointerIdBase)) int32_t touchPointerIdBase;

  /// @brief Field touchPointerCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_touchPointerCount, put = setStaticF_touchPointerCount)) int32_t touchPointerCount;

  /// @brief Field penPointerIdBase, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_penPointerIdBase, put = setStaticF_penPointerIdBase)) int32_t penPointerIdBase;

  /// @brief Field penPointerCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_penPointerCount, put = setStaticF_penPointerCount)) int32_t penPointerCount;

  /// @brief Field hoveringPointers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_hoveringPointers, put = setStaticF_hoveringPointers))::ArrayW<int32_t, ::Array<int32_t>*> hoveringPointers;

  static inline void setStaticF_maxPointers(int32_t value);

  static inline int32_t getStaticF_maxPointers();

  static inline void setStaticF_invalidPointerId(int32_t value);

  static inline int32_t getStaticF_invalidPointerId();

  static inline void setStaticF_mousePointerId(int32_t value);

  static inline int32_t getStaticF_mousePointerId();

  static inline void setStaticF_touchPointerIdBase(int32_t value);

  static inline int32_t getStaticF_touchPointerIdBase();

  static inline void setStaticF_touchPointerCount(int32_t value);

  static inline int32_t getStaticF_touchPointerCount();

  static inline void setStaticF_penPointerIdBase(int32_t value);

  static inline int32_t getStaticF_penPointerIdBase();

  static inline void setStaticF_penPointerCount(int32_t value);

  static inline int32_t getStaticF_penPointerCount();

  static inline void setStaticF_hoveringPointers(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_hoveringPointers();

  // Ctor Parameters [CppParam { name: "", ty: "PointerId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerId(PointerId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerId(PointerId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerId();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerId, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerId);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerId*, "UnityEngine.UIElements", "PointerId");
