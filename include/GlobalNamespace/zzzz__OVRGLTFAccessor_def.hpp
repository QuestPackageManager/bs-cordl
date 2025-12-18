#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFAccessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRGLTFComponentType_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFAccessor)
namespace GlobalNamespace {
struct OVRGLTFAccessor_GLTFAccessor;
}
namespace GlobalNamespace {
struct OVRGLTFAccessor_GLTFBufferView;
}
namespace GlobalNamespace {
struct OVRGLTFAccessor_GLTFBuffer;
}
namespace GlobalNamespace {
struct OVRGLTFComponentType;
}
namespace GlobalNamespace {
struct OVRGLTFType;
}
namespace OVRSimpleJSON {
class JSONNode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class Stream;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGLTFAccessor;
}
namespace GlobalNamespace {
struct OVRGLTFAccessor_GLTFAccessor;
}
namespace GlobalNamespace {
struct OVRGLTFAccessor_GLTFBuffer;
}
namespace GlobalNamespace {
struct OVRGLTFAccessor_GLTFBufferView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGLTFAccessor);
MARK_VAL_T(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor);
MARK_VAL_T(::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer);
MARK_VAL_T(::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView);
// Dependencies OVRGLTFComponentType, OVRGLTFType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRGLTFAccessor/GLTFAccessor
struct CORDL_TYPE OVRGLTFAccessor_GLTFAccessor {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFAccessor_GLTFAccessor();

  // Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::OVRGLTFType", modifiers: "", def_value: None }, CppParam { name: "ComponentType", ty: "::GlobalNamespace::OVRGLTFComponentType",
  // modifiers: "", def_value: None }, CppParam { name: "ComponentTypeStride", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "BufferViewIndex", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "ByteOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "Min", ty: "::OVRSimpleJSON::JSONNode*", modifiers: "", def_value: None }, CppParam { name: "Max", ty: "::OVRSimpleJSON::JSONNode*", modifiers: "", def_value: None }]
  constexpr OVRGLTFAccessor_GLTFAccessor(::GlobalNamespace::OVRGLTFType Type, ::GlobalNamespace::OVRGLTFComponentType ComponentType, int32_t ComponentTypeStride, int32_t BufferViewIndex,
                                         int32_t ByteOffset, int32_t Count, ::OVRSimpleJSON::JSONNode* Min, ::OVRSimpleJSON::JSONNode* Max) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7132 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field Type, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::OVRGLTFType Type;

  /// @brief Field ComponentType, offset: 0x4, size: 0x4, def value: None
  ::GlobalNamespace::OVRGLTFComponentType ComponentType;

  /// @brief Field ComponentTypeStride, offset: 0x8, size: 0x4, def value: None
  int32_t ComponentTypeStride;

  /// @brief Field BufferViewIndex, offset: 0xc, size: 0x4, def value: None
  int32_t BufferViewIndex;

  /// @brief Field ByteOffset, offset: 0x10, size: 0x4, def value: None
  int32_t ByteOffset;

  /// @brief Field Count, offset: 0x14, size: 0x4, def value: None
  int32_t Count;

  /// @brief Field Min, offset: 0x18, size: 0x8, def value: None
  ::OVRSimpleJSON::JSONNode* Min;

  /// @brief Field Max, offset: 0x20, size: 0x8, def value: None
  ::OVRSimpleJSON::JSONNode* Max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor, ComponentType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor, ComponentTypeStride) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor, BufferViewIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor, ByteOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor, Count) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor, Min) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor, Max) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRGLTFAccessor/GLTFBufferView
struct CORDL_TYPE OVRGLTFAccessor_GLTFBufferView {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFAccessor_GLTFBufferView();

  // Ctor Parameters [CppParam { name: "BufferIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ByteOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "ByteLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ByteStride", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRGLTFAccessor_GLTFBufferView(int32_t BufferIndex, int32_t ByteOffset, int32_t ByteLength, int32_t ByteStride) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7133 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field BufferIndex, offset: 0x0, size: 0x4, def value: None
  int32_t BufferIndex;

  /// @brief Field ByteOffset, offset: 0x4, size: 0x4, def value: None
  int32_t ByteOffset;

  /// @brief Field ByteLength, offset: 0x8, size: 0x4, def value: None
  int32_t ByteLength;

  /// @brief Field ByteStride, offset: 0xc, size: 0x4, def value: None
  int32_t ByteStride;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView, BufferIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView, ByteOffset) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView, ByteLength) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView, ByteStride) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRGLTFAccessor/GLTFBuffer
struct CORDL_TYPE OVRGLTFAccessor_GLTFBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFAccessor_GLTFBuffer();

  // Ctor Parameters [CppParam { name: "ByteLength", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRGLTFAccessor_GLTFBuffer(int32_t ByteLength) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7134 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ByteLength, offset: 0x0, size: 0x4, def value: None
  int32_t ByteLength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer, ByteLength) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRGLTFAccessor::GLTFAccessor, OVRGLTFAccessor::GLTFBuffer, OVRGLTFAccessor::GLTFBufferView, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRGLTFAccessor
class CORDL_TYPE OVRGLTFAccessor : public ::System::Object {
public:
  // Declarations
  using GLTFAccessor = ::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor;

  using GLTFBuffer = ::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer;

  using GLTFBufferView = ::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView;

  /// @brief Field _accessors, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__accessors,
                      put = __cordl_internal_set__accessors)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor>* _accessors;

  /// @brief Field _activeBuffer, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__activeBuffer, put = __cordl_internal_set__activeBuffer)) ::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer _activeBuffer;

  /// @brief Field _activeBufferOffset, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get__activeBufferOffset, put = __cordl_internal_set__activeBufferOffset)) int32_t _activeBufferOffset;

  /// @brief Field _activeBufferView, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__activeBufferView, put = __cordl_internal_set__activeBufferView)) ::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView _activeBufferView;

  /// @brief Field _activeGltfAccessor, offset 0x40, size 0x28
  __declspec(property(get = __cordl_internal_get__activeGltfAccessor, put = __cordl_internal_set__activeGltfAccessor)) ::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor _activeGltfAccessor;

  /// @brief Field _binaryChunk, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__binaryChunk, put = __cordl_internal_set__binaryChunk)) ::System::IO::Stream* _binaryChunk;

  /// @brief Field _binaryChunkLength, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__binaryChunkLength, put = __cordl_internal_set__binaryChunkLength)) int32_t _binaryChunkLength;

  /// @brief Field _binaryChunkStart, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__binaryChunkStart, put = __cordl_internal_set__binaryChunkStart)) int32_t _binaryChunkStart;

  /// @brief Field _bufferViews, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__bufferViews,
                      put = __cordl_internal_set__bufferViews)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView>* _bufferViews;

  /// @brief Field _buffers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__buffers, put = __cordl_internal_set__buffers)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer>* _buffers;

  /// @brief Field _reader, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__reader, put = __cordl_internal_set__reader)) ::System::IO::BinaryReader* _reader;

  /// @brief Field _requireStrideSeek, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get__requireStrideSeek, put = __cordl_internal_set__requireStrideSeek)) bool _requireStrideSeek;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x5c76030, size 0x20, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetDataCount, addr 0x5c76050, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetDataCount();

  /// @brief Method GetMaxValueForType, addr 0x5c751a0, size 0x100, virtual false, abstract: false, final false
  inline float_t GetMaxValueForType(::GlobalNamespace::OVRGLTFComponentType type);

  /// @brief Method GetStrideForType, addr 0x5c73c58, size 0x100, virtual false, abstract: false, final false
  inline int32_t GetStrideForType(::GlobalNamespace::OVRGLTFComponentType type);

  static inline ::GlobalNamespace::OVRGLTFAccessor* New_ctor(::OVRSimpleJSON::JSONNode* accessorsRoot, ::OVRSimpleJSON::JSONNode* bufferViewsRoot, ::OVRSimpleJSON::JSONNode* buffersRoot,
                                                             ::System::IO::BinaryReader* binaryChunkReader, int32_t binaryChinkStart, int32_t binaryChunkLength);

  /// @brief Method ReadAsFloat, addr 0x5c7430c, size 0x194, virtual false, abstract: false, final false
  static inline float_t ReadAsFloat(::System::IO::BinaryReader* reader, ::GlobalNamespace::OVRGLTFComponentType type);

  /// @brief Method ReadAsInt, addr 0x5c74548, size 0x19c, virtual false, abstract: false, final false
  static inline int32_t ReadAsInt(::System::IO::BinaryReader* reader, ::GlobalNamespace::OVRGLTFComponentType type);

  /// @brief Method ReadBuffer, addr 0x5c75f34, size 0xfc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadBuffer(int32_t bufferViewIndex);

  /// @brief Method ReadColor, addr 0x5c74d90, size 0x410, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> ReadColor();

  /// @brief Method ReadFloat, addr 0x5c74188, size 0x184, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> ReadFloat();

  /// @brief Method ReadInt, addr 0x5c744a0, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> ReadInt();

  /// @brief Method ReadJoints, addr 0x5c75588, size 0x1b8, virtual false, abstract: false, final false
  inline void ReadJoints(::ByRef<::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*>> resultsBoneWeights);

  /// @brief Method ReadMatrix4x4, addr 0x5c75a80, size 0x4b4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ReadMatrix4x4(::UnityEngine::Vector3 conversionScale);

  /// @brief Method ReadQuaterion, addr 0x5c75740, size 0x340, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> ReadQuaterion(::UnityEngine::Vector4 gltfToUnitySpaceRotation);

  /// @brief Method ReadVector2, addr 0x5c746e4, size 0x1b4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> ReadVector2();

  /// @brief Method ReadVector3, addr 0x5c74898, size 0x274, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ReadVector3(::UnityEngine::Vector3 conversionScale);

  /// @brief Method ReadVector4, addr 0x5c74b0c, size 0x284, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ReadVector4(::UnityEngine::Vector4 conversionScale);

  /// @brief Method ReadWeights, addr 0x5c752a0, size 0x2e8, virtual false, abstract: false, final false
  inline void ReadWeights(::ByRef<::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*>> resultsBoneWeights);

  /// @brief Method Seek, addr 0x5c73ec4, size 0x1e0, virtual false, abstract: false, final false
  inline void Seek(int32_t accessorIndex, bool onlyBufferView);

  /// @brief Method SeekStride, addr 0x5c740a4, size 0xe4, virtual false, abstract: false, final false
  inline void SeekStride(int32_t strideIndex);

  /// @brief Method ToOVRType, addr 0x5c73d58, size 0x16c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRGLTFType ToOVRType(::StringW type);

  /// @brief Method TryCreate, addr 0x5c72a24, size 0x1a8, virtual false, abstract: false, final false
  static inline bool TryCreate(::OVRSimpleJSON::JSONNode* accessorsRoot, ::OVRSimpleJSON::JSONNode* bufferViewsRoot, ::OVRSimpleJSON::JSONNode* buffersRoot, ::System::IO::Stream* binaryChunk,
                               ::ByRef<::GlobalNamespace::OVRGLTFAccessor*> dataAccessor);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor>* const& __cordl_internal_get__accessors() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor>*& __cordl_internal_get__accessors();

  constexpr ::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer const& __cordl_internal_get__activeBuffer() const;

  constexpr ::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer& __cordl_internal_get__activeBuffer();

  constexpr int32_t const& __cordl_internal_get__activeBufferOffset() const;

  constexpr int32_t& __cordl_internal_get__activeBufferOffset();

  constexpr ::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView const& __cordl_internal_get__activeBufferView() const;

  constexpr ::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView& __cordl_internal_get__activeBufferView();

  constexpr ::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor const& __cordl_internal_get__activeGltfAccessor() const;

  constexpr ::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor& __cordl_internal_get__activeGltfAccessor();

  constexpr ::System::IO::Stream* const& __cordl_internal_get__binaryChunk() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get__binaryChunk();

  constexpr int32_t const& __cordl_internal_get__binaryChunkLength() const;

  constexpr int32_t& __cordl_internal_get__binaryChunkLength();

  constexpr int32_t const& __cordl_internal_get__binaryChunkStart() const;

  constexpr int32_t& __cordl_internal_get__binaryChunkStart();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView>* const& __cordl_internal_get__bufferViews() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView>*& __cordl_internal_get__bufferViews();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer>* const& __cordl_internal_get__buffers() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer>*& __cordl_internal_get__buffers();

  constexpr ::System::IO::BinaryReader* const& __cordl_internal_get__reader() const;

  constexpr ::System::IO::BinaryReader*& __cordl_internal_get__reader();

  constexpr bool const& __cordl_internal_get__requireStrideSeek() const;

  constexpr bool& __cordl_internal_get__requireStrideSeek();

  constexpr void __cordl_internal_set__accessors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor>* value);

  constexpr void __cordl_internal_set__activeBuffer(::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer value);

  constexpr void __cordl_internal_set__activeBufferOffset(int32_t value);

  constexpr void __cordl_internal_set__activeBufferView(::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView value);

  constexpr void __cordl_internal_set__activeGltfAccessor(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor value);

  constexpr void __cordl_internal_set__binaryChunk(::System::IO::Stream* value);

  constexpr void __cordl_internal_set__binaryChunkLength(int32_t value);

  constexpr void __cordl_internal_set__binaryChunkStart(int32_t value);

  constexpr void __cordl_internal_set__bufferViews(::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView>* value);

  constexpr void __cordl_internal_set__buffers(::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer>* value);

  constexpr void __cordl_internal_set__reader(::System::IO::BinaryReader* value);

  constexpr void __cordl_internal_set__requireStrideSeek(bool value);

  /// @brief Method .ctor, addr 0x5c72bcc, size 0x108c, virtual false, abstract: false, final false
  inline void _ctor(::OVRSimpleJSON::JSONNode* accessorsRoot, ::OVRSimpleJSON::JSONNode* bufferViewsRoot, ::OVRSimpleJSON::JSONNode* buffersRoot, ::System::IO::BinaryReader* binaryChunkReader,
                    int32_t binaryChinkStart, int32_t binaryChunkLength);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFAccessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAccessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRGLTFAccessor(OVRGLTFAccessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAccessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRGLTFAccessor(OVRGLTFAccessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7135 };

  /// @brief Field _accessors, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor>* ____accessors;

  /// @brief Field _bufferViews, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView>* ____bufferViews;

  /// @brief Field _buffers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer>* ____buffers;

  /// @brief Field _binaryChunk, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* ____binaryChunk;

  /// @brief Field _binaryChunkLength, offset: 0x30, size: 0x4, def value: None
  int32_t ____binaryChunkLength;

  /// @brief Field _binaryChunkStart, offset: 0x34, size: 0x4, def value: None
  int32_t ____binaryChunkStart;

  /// @brief Field _reader, offset: 0x38, size: 0x8, def value: None
  ::System::IO::BinaryReader* ____reader;

  /// @brief Field _activeGltfAccessor, offset: 0x40, size: 0x28, def value: None
  ::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor ____activeGltfAccessor;

  /// @brief Field _activeBufferView, offset: 0x68, size: 0x10, def value: None
  ::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView ____activeBufferView;

  /// @brief Field _activeBuffer, offset: 0x78, size: 0x4, def value: None
  ::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer ____activeBuffer;

  /// @brief Field _activeBufferOffset, offset: 0x7c, size: 0x4, def value: None
  int32_t ____activeBufferOffset;

  /// @brief Field _requireStrideSeek, offset: 0x80, size: 0x1, def value: None
  bool ____requireStrideSeek;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ____accessors) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ____bufferViews) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ____buffers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ____binaryChunk) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ____binaryChunkLength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ____binaryChunkStart) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ____reader) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ____activeGltfAccessor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ____activeBufferView) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ____activeBuffer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ____activeBufferOffset) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor, ____requireStrideSeek) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFAccessor, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGLTFAccessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFAccessor*, "", "OVRGLTFAccessor");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor, "", "OVRGLTFAccessor/GLTFAccessor");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer, "", "OVRGLTFAccessor/GLTFBuffer");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView, "", "OVRGLTFAccessor/GLTFBufferView");
