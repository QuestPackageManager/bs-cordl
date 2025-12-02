#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Hammersley.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Hammersley)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct Hammersley2dSeq16_Hammersley__hammersley2dSeq16_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct Hammersley2dSeq256_Hammersley__hammersley2dSeq256_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct Hammersley2dSeq32_Hammersley__hammersley2dSeq32_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct Hammersley_Hammersley2dSeq16;
}
namespace UnityEngine::Rendering {
struct Hammersley_Hammersley2dSeq256;
}
namespace UnityEngine::Rendering {
struct Hammersley_Hammersley2dSeq32;
}
namespace UnityEngine::Rendering {
struct Hammersley_Hammersley2dSeq64;
}
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class Hammersley;
}
namespace UnityEngine::Rendering {
struct Hammersley2dSeq16_Hammersley__hammersley2dSeq16_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct Hammersley2dSeq256_Hammersley__hammersley2dSeq256_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct Hammersley2dSeq32_Hammersley__hammersley2dSeq32_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct Hammersley_Hammersley2dSeq16;
}
namespace UnityEngine::Rendering {
struct Hammersley_Hammersley2dSeq256;
}
namespace UnityEngine::Rendering {
struct Hammersley_Hammersley2dSeq32;
}
namespace UnityEngine::Rendering {
struct Hammersley_Hammersley2dSeq64;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Hammersley);
MARK_VAL_T(::UnityEngine::Rendering::Hammersley2dSeq16_Hammersley__hammersley2dSeq16_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::Hammersley2dSeq256_Hammersley__hammersley2dSeq256_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::Hammersley2dSeq32_Hammersley__hammersley2dSeq32_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::Hammersley_Hammersley2dSeq16);
MARK_VAL_T(::UnityEngine::Rendering::Hammersley_Hammersley2dSeq256);
MARK_VAL_T(::UnityEngine::Rendering::Hammersley_Hammersley2dSeq32);
MARK_VAL_T(::UnityEngine::Rendering::Hammersley_Hammersley2dSeq64);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.Hammersley/Hammersley2dSeq16/<hammersley2dSeq16>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE Hammersley2dSeq16_Hammersley__hammersley2dSeq16_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hammersley2dSeq16_Hammersley__hammersley2dSeq16_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Hammersley2dSeq16_Hammersley__hammersley2dSeq16_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12177 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x100 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  float_t FixedElementField;

  /// @brief Size padding 0x100 - 0x4 = 0xfc, packed as 0xfc
  uint8_t _cordl_size_padding[0xfc];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Hammersley2dSeq16_Hammersley__hammersley2dSeq16_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Hammersley2dSeq16_Hammersley__hammersley2dSeq16_e__FixedBuffer, 0x100>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.Hammersley::Hammersley2dSeq16::<hammersley2dSeq16>e__FixedBuffer
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.Hammersley/Hammersley2dSeq16
struct CORDL_TYPE Hammersley_Hammersley2dSeq16 {
public:
  // Declarations
  using _hammersley2dSeq16_e__FixedBuffer = ::UnityEngine::Rendering::Hammersley2dSeq16_Hammersley__hammersley2dSeq16_e__FixedBuffer;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Hammersley_Hammersley2dSeq16();

  // Ctor Parameters [CppParam { name: "hammersley2dSeq16", ty: "::UnityEngine::Rendering::Hammersley2dSeq16_Hammersley__hammersley2dSeq16_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr Hammersley_Hammersley2dSeq16(::UnityEngine::Rendering::Hammersley2dSeq16_Hammersley__hammersley2dSeq16_e__FixedBuffer hammersley2dSeq16) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12178 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x100 };

  /// @brief Field hammersley2dSeq16, offset: 0x0, size: 0x100, def value: None
  ::UnityEngine::Rendering::Hammersley2dSeq16_Hammersley__hammersley2dSeq16_e__FixedBuffer hammersley2dSeq16;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Hammersley_Hammersley2dSeq16, hammersley2dSeq16) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Hammersley_Hammersley2dSeq16, 0x100>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.Hammersley/Hammersley2dSeq32/<hammersley2dSeq32>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE Hammersley2dSeq32_Hammersley__hammersley2dSeq32_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hammersley2dSeq32_Hammersley__hammersley2dSeq32_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Hammersley2dSeq32_Hammersley__hammersley2dSeq32_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12179 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x200 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  float_t FixedElementField;

  /// @brief Size padding 0x200 - 0x4 = 0x1fc, packed as 0x1fc
  uint8_t _cordl_size_padding[0x1fc];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Hammersley2dSeq32_Hammersley__hammersley2dSeq32_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Hammersley2dSeq32_Hammersley__hammersley2dSeq32_e__FixedBuffer, 0x200>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.Hammersley::Hammersley2dSeq32::<hammersley2dSeq32>e__FixedBuffer
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.Hammersley/Hammersley2dSeq32
struct CORDL_TYPE Hammersley_Hammersley2dSeq32 {
public:
  // Declarations
  using _hammersley2dSeq32_e__FixedBuffer = ::UnityEngine::Rendering::Hammersley2dSeq32_Hammersley__hammersley2dSeq32_e__FixedBuffer;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Hammersley_Hammersley2dSeq32();

  // Ctor Parameters [CppParam { name: "hammersley2dSeq32", ty: "::UnityEngine::Rendering::Hammersley2dSeq32_Hammersley__hammersley2dSeq32_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr Hammersley_Hammersley2dSeq32(::UnityEngine::Rendering::Hammersley2dSeq32_Hammersley__hammersley2dSeq32_e__FixedBuffer hammersley2dSeq32) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12180 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x200 };

  /// @brief Field hammersley2dSeq32, offset: 0x0, size: 0x200, def value: None
  ::UnityEngine::Rendering::Hammersley2dSeq32_Hammersley__hammersley2dSeq32_e__FixedBuffer hammersley2dSeq32;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Hammersley_Hammersley2dSeq32, hammersley2dSeq32) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Hammersley_Hammersley2dSeq32, 0x200>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.Hammersley/Hammersley2dSeq64/<hammersley2dSeq64>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12181 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x400 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  float_t FixedElementField;

  /// @brief Size padding 0x400 - 0x4 = 0x3fc, packed as 0x3fc
  uint8_t _cordl_size_padding[0x3fc];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer, 0x400>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.Hammersley::Hammersley2dSeq64::<hammersley2dSeq64>e__FixedBuffer
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.Hammersley/Hammersley2dSeq64
struct CORDL_TYPE Hammersley_Hammersley2dSeq64 {
public:
  // Declarations
  using _hammersley2dSeq64_e__FixedBuffer = ::UnityEngine::Rendering::Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Hammersley_Hammersley2dSeq64();

  // Ctor Parameters [CppParam { name: "hammersley2dSeq64", ty: "::UnityEngine::Rendering::Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr Hammersley_Hammersley2dSeq64(::UnityEngine::Rendering::Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer hammersley2dSeq64) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12182 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x400 };

  /// @brief Field hammersley2dSeq64, offset: 0x0, size: 0x400, def value: None
  ::UnityEngine::Rendering::Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer hammersley2dSeq64;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Hammersley_Hammersley2dSeq64, hammersley2dSeq64) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Hammersley_Hammersley2dSeq64, 0x400>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.Hammersley/Hammersley2dSeq256/<hammersley2dSeq256>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE Hammersley2dSeq256_Hammersley__hammersley2dSeq256_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hammersley2dSeq256_Hammersley__hammersley2dSeq256_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Hammersley2dSeq256_Hammersley__hammersley2dSeq256_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12183 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1000 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  float_t FixedElementField;

  /// @brief Size padding 0x1000 - 0x4 = 0xffc, packed as 0xffc
  uint8_t _cordl_size_padding[0xffc];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Hammersley2dSeq256_Hammersley__hammersley2dSeq256_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Hammersley2dSeq256_Hammersley__hammersley2dSeq256_e__FixedBuffer, 0x1000>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.Hammersley::Hammersley2dSeq256::<hammersley2dSeq256>e__FixedBuffer
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.Hammersley/Hammersley2dSeq256
struct CORDL_TYPE Hammersley_Hammersley2dSeq256 {
public:
  // Declarations
  using _hammersley2dSeq256_e__FixedBuffer = ::UnityEngine::Rendering::Hammersley2dSeq256_Hammersley__hammersley2dSeq256_e__FixedBuffer;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Hammersley_Hammersley2dSeq256();

  // Ctor Parameters [CppParam { name: "hammersley2dSeq256", ty: "::UnityEngine::Rendering::Hammersley2dSeq256_Hammersley__hammersley2dSeq256_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr Hammersley_Hammersley2dSeq256(::UnityEngine::Rendering::Hammersley2dSeq256_Hammersley__hammersley2dSeq256_e__FixedBuffer hammersley2dSeq256) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12184 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1000 };

  /// @brief Field hammersley2dSeq256, offset: 0x0, size: 0x1000, def value: None
  ::UnityEngine::Rendering::Hammersley2dSeq256_Hammersley__hammersley2dSeq256_e__FixedBuffer hammersley2dSeq256;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Hammersley_Hammersley2dSeq256, hammersley2dSeq256) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Hammersley_Hammersley2dSeq256, 0x1000>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.Hammersley
class CORDL_TYPE Hammersley : public ::System::Object {
public:
  // Declarations
  using Hammersley2dSeq16 = ::UnityEngine::Rendering::Hammersley_Hammersley2dSeq16;

  using Hammersley2dSeq256 = ::UnityEngine::Rendering::Hammersley_Hammersley2dSeq256;

  using Hammersley2dSeq32 = ::UnityEngine::Rendering::Hammersley_Hammersley2dSeq32;

  using Hammersley2dSeq64 = ::UnityEngine::Rendering::Hammersley_Hammersley2dSeq64;

  /// @brief Field k_Hammersley2dSeq16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_Hammersley2dSeq16, put = setStaticF_k_Hammersley2dSeq16)) ::ArrayW<float_t, ::Array<float_t>*> k_Hammersley2dSeq16;

  /// @brief Field k_Hammersley2dSeq256, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_Hammersley2dSeq256, put = setStaticF_k_Hammersley2dSeq256)) ::ArrayW<float_t, ::Array<float_t>*> k_Hammersley2dSeq256;

  /// @brief Field k_Hammersley2dSeq32, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_Hammersley2dSeq32, put = setStaticF_k_Hammersley2dSeq32)) ::ArrayW<float_t, ::Array<float_t>*> k_Hammersley2dSeq32;

  /// @brief Field k_Hammersley2dSeq64, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_Hammersley2dSeq64, put = setStaticF_k_Hammersley2dSeq64)) ::ArrayW<float_t, ::Array<float_t>*> k_Hammersley2dSeq64;

  /// @brief Field s_hammersley2DSeq16Id, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_hammersley2DSeq16Id, put = setStaticF_s_hammersley2DSeq16Id)) int32_t s_hammersley2DSeq16Id;

  /// @brief Field s_hammersley2DSeq256Id, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_hammersley2DSeq256Id, put = setStaticF_s_hammersley2DSeq256Id)) int32_t s_hammersley2DSeq256Id;

  /// @brief Field s_hammersley2DSeq32Id, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_hammersley2DSeq32Id, put = setStaticF_s_hammersley2DSeq32Id)) int32_t s_hammersley2DSeq32Id;

  /// @brief Field s_hammersley2DSeq64Id, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_hammersley2DSeq64Id, put = setStaticF_s_hammersley2DSeq64Id)) int32_t s_hammersley2DSeq64Id;

  /// @brief Method BindConstants, addr 0x6584be8, size 0x15c, virtual false, abstract: false, final false
  static inline void BindConstants(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* cs);

  /// @brief Method Initialize, addr 0x6584878, size 0x370, virtual false, abstract: false, final false
  static inline void Initialize();

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_k_Hammersley2dSeq16();

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_k_Hammersley2dSeq256();

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_k_Hammersley2dSeq32();

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_k_Hammersley2dSeq64();

  static inline int32_t getStaticF_s_hammersley2DSeq16Id();

  static inline int32_t getStaticF_s_hammersley2DSeq256Id();

  static inline int32_t getStaticF_s_hammersley2DSeq32Id();

  static inline int32_t getStaticF_s_hammersley2DSeq64Id();

  static inline void setStaticF_k_Hammersley2dSeq16(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline void setStaticF_k_Hammersley2dSeq256(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline void setStaticF_k_Hammersley2dSeq32(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline void setStaticF_k_Hammersley2dSeq64(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline void setStaticF_s_hammersley2DSeq16Id(int32_t value);

  static inline void setStaticF_s_hammersley2DSeq256Id(int32_t value);

  static inline void setStaticF_s_hammersley2DSeq32Id(int32_t value);

  static inline void setStaticF_s_hammersley2DSeq64Id(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hammersley();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hammersley", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hammersley(Hammersley&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hammersley", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hammersley(Hammersley const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12185 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Hammersley, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::Hammersley);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Hammersley*, "UnityEngine.Rendering", "Hammersley");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Hammersley2dSeq16_Hammersley__hammersley2dSeq16_e__FixedBuffer, "UnityEngine.Rendering",
                       "Hammersley/Hammersley2dSeq16/<hammersley2dSeq16>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Hammersley2dSeq256_Hammersley__hammersley2dSeq256_e__FixedBuffer, "UnityEngine.Rendering",
                       "Hammersley/Hammersley2dSeq256/<hammersley2dSeq256>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Hammersley2dSeq32_Hammersley__hammersley2dSeq32_e__FixedBuffer, "UnityEngine.Rendering",
                       "Hammersley/Hammersley2dSeq32/<hammersley2dSeq32>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer, "UnityEngine.Rendering",
                       "Hammersley/Hammersley2dSeq64/<hammersley2dSeq64>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Hammersley_Hammersley2dSeq16, "UnityEngine.Rendering", "Hammersley/Hammersley2dSeq16");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Hammersley_Hammersley2dSeq256, "UnityEngine.Rendering", "Hammersley/Hammersley2dSeq256");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Hammersley_Hammersley2dSeq32, "UnityEngine.Rendering", "Hammersley/Hammersley2dSeq32");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Hammersley_Hammersley2dSeq64, "UnityEngine.Rendering", "Hammersley/Hammersley2dSeq64");
