#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeLeakDetection)
// Forward declare root types
namespace Unity::Collections {
class NativeLeakDetection;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::NativeLeakDetection);
// Type: Unity.Collections::NativeLeakDetection
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Collections {
// Is value type: false
// CS Name: ::Unity.Collections::NativeLeakDetection*
class CORDL_TYPE NativeLeakDetection : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_NativeLeakDetectionMode, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_NativeLeakDetectionMode, put = setStaticF_s_NativeLeakDetectionMode)) int32_t s_NativeLeakDetectionMode;

  /// @brief Method Initialize, addr 0x31cbc2c, size 0x4c, virtual false, abstract: false, final false
  static inline void Initialize();

  static inline int32_t getStaticF_s_NativeLeakDetectionMode();

  static inline void setStaticF_s_NativeLeakDetectionMode(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeLeakDetection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeLeakDetection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeLeakDetection(NativeLeakDetection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeLeakDetection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeLeakDetection(NativeLeakDetection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeLeakDetection, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::NativeLeakDetection);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeLeakDetection*, "Unity.Collections", "NativeLeakDetection");
